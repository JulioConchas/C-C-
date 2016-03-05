package com.example.cesar.appluis;

import android.os.StrictMode;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLEncoder;
import java.util.ArrayList;


public class MainActivity extends AppCompatActivity {
    private EditText entrada;
    private TextView salida;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        entrada = (EditText) findViewById(R.id.EditText01);
        salida = (TextView) findViewById(R.id.TextView01);
        StrictMode.setThreadPolicy(new StrictMode.ThreadPolicy.
                Builder().permitNetwork().build());

    }
    public void buscar(View view){
        String[] parser;
        String[] parse1;
        ArrayList parse2 = new ArrayList();
        String print = "",aux;
        try {
            String palabras = entrada.getText().toString();
            String resultado = resultadosGoogle(palabras);
            parser = resultado.split(">");
            for(int i = 0;i < parser.length;i++){
                parse1 = parser[i].split("<");
                for(int j = 0;j < parse1.length;j++){
                    if(parse1[j].indexOf("h2") == -1 &&
                            parse1[j].indexOf("/h2") == -1 &&
                            parse1[j].indexOf("/a") == -1 &&
                            parse1[j].indexOf("Filtrar por...") == -1)parse2.add(parse1[j]);
                }
            }
            //System.out.println(parse2);
            for(int i = 0;i < parse2.size();i++){
                System.out.println(parse2.get(i));
                aux = parse2.get(i).toString();
                if(aux.indexOf("/") == -1)print += (aux + "\n");

            }
            salida.append(print);
        } catch (Exception e) {
            salida.append("Error al conectar\n");
            Log.e("HTTP", e.getMessage(), e);
       }
    }
    String resultadosGoogle(String palabras) throws Exception {
        String pagina = "", devuelve = "";
        int indice1 = 0,indice2 = 0,indice1a = 0;
        //URL url = new URL(linkDmIScoMPAS);
        URL url = new URL("https://sindelantal.mx/buscar/?city=Zapopan&q=Patria%2C+Zapopan%2C+Jal.&lat=20.7143978&lon=-103.3735304&address_1=&address_2=&zip=&neighborhood=&sublocality=Patria&city=Zapopan&state=Jalisco&address_3=&delivery=d");
        HttpURLConnection conexion = (HttpURLConnection)
        url.openConnection();
//        //conexion.setRequestProperty("User-Agent","Mozilla/4.0 (compatible; MSIE 7.0; Windows NT 5.1)");
        if (conexion.getResponseCode()==HttpURLConnection.HTTP_OK) {
            //return "Bien conectado";
            BufferedReader reader = new BufferedReader(new InputStreamReader(conexion.getInputStream()));
            String linea = reader.readLine();
            while (linea != null) {
                pagina += linea;
                linea = reader.readLine();
            }
            reader.close();
            while(indice1 != -1){
                        indice1 = pagina.indexOf("<h2>", indice1a);
                        indice2 = pagina.indexOf("</h2>", indice1a) + 5;
                        indice1a = indice2;
                        if(indice1 != -1)devuelve += pagina.substring(indice1,indice2);
          }
            return devuelve;
        } else {
            salida.append("ERROR: " + conexion.getResponseMessage() + "\n");
        }
        conexion.disconnect();
        //return devuelve;
        return "Mal conectado";
    }

