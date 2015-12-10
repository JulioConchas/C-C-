#include "parse.h"
#include "stack.cpp"

using namespace std;

string term[] = {".",";","var",":","get","put",",","?","|","&","=","!=","<","<=",
               ">",">=","+","-","*","/","!","(",")","id","nat","real","true",
               "false","$"};
string gen[] = {"stseq","stseq'","st","decl","assign","io","idseq",
                 "idseq'","select","select'","prop","prop'","clause","clause'",
                 "rel","rel'","exp","exp'","term","term'","fact","atom"};

stack *p = new stack();

int parse::stringToInt(string pos){
  int ret;
  //cout <<"generador1: "<<pos<<"\n";
  for(int i = 0;i < 22;i++){
      if(pos == gen[i]){
        //cout <<"pos: "<<gen[i]<<i<<"\n";
        ret = i;
      }
  }
  return ret;

}
void parse::printScaner(char *c){
  scanner scan2(c);
  scanner::token t;

  do{
     t = scan2.get();

		switch(t){
			case scanner::_nat: cout <<"Natural: "<<"["<<scan2.lexema()<<"]"<<"\n";break;
			case scanner::_real: cout <<"Real: "<<"["<<scan2.lexema()<<"]"<<"\n";break;
			case scanner::_id: cout <<"Id: "<<"["<<scan2.lexema()<<"]"<<"\n";break;
			case scanner::_err: cout <<"Error\n";break;
      case scanner::_var: cout <<"Palabra reservada: "<<"["<<scan2.lexema()<<"]"<<"\n";break;
      case scanner::_get: cout <<"Palabra reservada: "<<"["<<scan2.lexema()<<"]"<<"\n";break;
      case scanner::_put: cout <<"Palabra reservada: "<<"["<<scan2.lexema()<<"]"<<"\n";break;
      case scanner::_true: cout <<"Palabra reservada: "<<"["<<scan2.lexema()<<"]"<<"\n";break;
      case scanner::_false: cout <<"Palabra reservada: "<<"["<<scan2.lexema()<<"]"<<"\n";break;
      case scanner::_eof: cout <<"Fin de archivo\n";break;
      case scanner::_pi: cout <<"(\n";break;
      case scanner::_plo: cout <<"|\n";break;
      case scanner::_pd: cout <<")\n";break;
      case scanner::_ms: cout <<"+\n";break;
      case scanner::_mn: cout <<"-\n";break;
      case scanner::_por: cout <<"*\n";break;
      case scanner::_slash: cout <<"/\n";break;
      case scanner::_aper: cout <<"&\n";break;
      case scanner::_adm: cout <<"!\n";break;
      case scanner::_cma: cout <<",\n";break;
      case scanner::_pt: cout <<".\n";break;
      case scanner::_sem: cout <<";\n";break;
      case scanner::_twopt: cout <<":\n";break;
      case scanner::_what: cout <<"?\n";break;
      case scanner::_iq: cout <<"igualdad\n";break;
      case scanner::_dif: cout <<"desigualdad\n";break;
      case scanner::_mq: cout <<"mayor que\n";break;
      case scanner::_lq: cout <<"menor que\n";break;
      case scanner::_miq: cout <<"mayor igual que\n";break;
      case scanner::_liq: cout <<"menor igual que\n";break;
		}
  }while(t != scanner::_err && t != scanner::_eof);
}
string parse::controller(string s,scanner::token t){
string ret;
int prod = stringToInt(s);

  switch(prod){
      case 0://stseq
        if(t == scanner::_var || t == scanner::_id ||
           t == scanner::_get || t == scanner::_put){
             p -> push("stseq'");
             p -> push("st");
             ret = "chido";
           }
        else ret = "error";
      break;
      case 1://stseq'
        if(t == scanner::_pt){
          p -> push(".");
          ret = "chido";
        }
        else if(t == scanner::_sem){
          p -> push("stseq");
          p -> push(";");
          ret = "chido";
        }
        else ret = "error";
      break;
      case 2://st
        if(t == scanner::_var){
          p -> push("decl");
          ret = "chido";
        }
        else if(t == scanner::_id){
          p -> push("assign");
          ret = "chido";
        }
        else if(t == scanner::_get || t == scanner::_put){
          p -> push("io");
          ret = "chido";
        }
        else ret = "error";
      break;
      case 3://decl
        if(t == scanner::_var){
          p -> push("idseq");
          p -> push("var");
          ret = "chido";
        }
        else ret = "error";
      break;
      case 4://assing
        if(t == scanner::_id){
          p -> push("select");
          p -> push(":");
          p -> push("id");
          ret = "chido";
        }
        else ret = "error";
      break;
      case 5://io
        if(t == scanner::_get){
          p -> push("id");
          p -> push("get");
          ret = "chido";
        }
        else if(t == scanner::_put){
          p -> push("select");
          p -> push("put");
          ret = "chido";
        }
        else ret = "error";
      break;
      case 6://idseq
        if(t == scanner::_id){
          p -> push("idseq'");
          p -> push("id");
          ret = "chido";
        }
        else ret = "error";
      break;
      case 7://idseq'
        if(t == scanner::_cma){
           p -> push("idseq'");
           p -> push("id");
           p -> push(",");
          ret = "chido";
        }
        else if(t == scanner::_pt || t == scanner::_sem)ret = "chido";
        else ret = "error";
      break;
      case 8://select
        if(t == scanner::_mn || t == scanner::_adm || t == scanner::_pi ||
           t == scanner::_id || t == scanner::_nat || t == scanner::_real ||
           t == scanner::_true || t == scanner::_false){
             p -> push("select'");
             p -> push("prop");
             ret = "chido";
           }
           else ret = "error";
      break;
      case 9://selec
        if(t == scanner::_what){
          p -> push("select");
          p -> push(":");
          p -> push("select");
          p -> push("?");
          ret = "chido";
        }
        else if(t == scanner::_pd || t == scanner::_twopt ||
                t == scanner::_pt || t == scanner::_sem)ret = "chido";
        else ret = "error";
      break;
      case 10://prop
        if(t == scanner::_mn || t == scanner::_adm || t == scanner::_pi ||
           t == scanner::_id || t == scanner::_nat || t == scanner::_real ||
           t == scanner::_true || t == scanner::_false){
             p -> push("prop'");
             p -> push("clause");
             ret = "chido";
           }
         else ret = "error";
      break;
      case 11://prop'
        if(t == scanner::_plo){
          p -> push("prop'");
          p -> push("clause");
          p -> push("|");
          ret = "chido";
        }
        else if(t == scanner::_what || t == scanner::_pd ||
                t == scanner::_twopt || t == scanner::_pt ||
                t == scanner::_sem)ret = "chido";
        else ret = "error";
      break;
      case 12://clause
        if(t == scanner::_mn || t == scanner::_adm || t == scanner::_pi ||
           t == scanner::_id || t == scanner::_nat || t == scanner::_real ||
           t == scanner::_true || t == scanner::_false){
             p -> push("clause'");
             p -> push("rel");
             ret = "chido";
           }
        else ret = "error";
      break;
      case 13://clause'
        if(t == scanner::_aper){
          p -> push("clause'");
          p -> push("rel");
          p -> push("&");
          ret = "chido";
        }
        else if(t == scanner::_what || t == scanner::_pd ||
                t == scanner::_twopt || t == scanner::_pt ||
                t == scanner::_sem || t == scanner::_plo)ret = "chido";
        else ret = "error";
      break;
      case 14://rel
        if(t == scanner::_mn || t == scanner::_adm || t == scanner::_pi ||
           t == scanner::_id || t == scanner::_nat || t == scanner::_real ||
           t == scanner::_true || t == scanner::_false){
             p -> push("rel'");
             p -> push("exp");
             ret = "chido";
           }
        else ret = "error";
      break;
      case 15://rel'
        if(t == scanner::_iq){
          p -> push("exp");
          p -> push("=");
          ret = "chido";
        }
        else if(t == scanner::_dif){
          p -> push("exp");
          p -> push("!=");
          ret = "chido";
        }
        else if(t == scanner::_lq){
          p -> push("exp");
          p -> push("<");
          ret = "chido";
        }
        else if(t == scanner::_liq){
          p -> push("exp");
          p -> push("<=");
          ret = "chido";
        }
        else if(t == scanner::_mq){
          p -> push("exp");
          p -> push(">");
          ret = "chido";
        }
        else if(t == scanner::_miq){
          p -> push("exp");
          p -> push(">=");
          ret = "chido";
        }
        else if(t == scanner::_what || t == scanner::_pd ||
                t == scanner::_twopt || t == scanner::_pt ||
                t == scanner::_sem || t == scanner::_plo ||
                t == scanner::_aper)ret = "chido";
        else ret = "error";
      break;
      case 16://exp
        if(t == scanner::_mn || t == scanner::_adm || t == scanner::_pi ||
             t == scanner::_id || t == scanner::_nat || t == scanner::_real ||
             t == scanner::_true || t == scanner::_false){
                p -> push("exp'");
                p -> push("term");
               ret = "chido";
             }
         else ret = "error";
      break;
      case 17://exp'
        if(t == scanner::_ms){
          p -> push("exp'");
          p -> push("term");
          p -> push("+");
          ret = "chido";
        }
        else if (t == scanner::_mn){
          p -> push("exp'");
          p -> push("term");
          p -> push("-");
          ret = "chido";
        }
        else if(t == scanner::_what || t == scanner::_pd ||
                t == scanner::_twopt || t == scanner::_pt ||
                t == scanner::_sem || t == scanner::_plo ||
                t == scanner::_aper || t == scanner::_iq ||
                t == scanner::_dif || t == scanner::_lq ||
                t == scanner::_liq || t == scanner::_mq ||
                t == scanner::_miq )ret = "chido";
        else ret = "error";
      break;
      case 18://term
          if(t == scanner::_mn || t == scanner::_adm || t == scanner::_pi ||
           t == scanner::_id || t == scanner::_nat || t == scanner::_real ||
           t == scanner::_true || t == scanner::_false){
             p -> push("term'");
             p -> push("fact");
             ret = "chido";
           }
          else ret = "error";
      break;
      case 19://term'
        if(t == scanner::_por){
          p -> push("term'");
          p -> push("fact");
          p -> push("*");
          ret = "chido";
        }
        else if(t == scanner::_slash){
          p -> push("term'");
          p -> push("fact");
          p -> push("/");
          ret = "chida";
        }
        else if(t == scanner::_what || t == scanner::_pd ||
                t == scanner::_twopt || t == scanner::_pt ||
                t == scanner::_sem || t == scanner::_plo ||
                t == scanner::_aper || t == scanner::_iq ||
                t == scanner::_dif || t == scanner::_lq ||
                t == scanner::_liq || t == scanner::_mq ||
                t == scanner::_miq || t == scanner::_mn ||
                t == scanner::_ms)ret = "chido";
        else ret = "error";
      break;
      case 20://fact
        if(t == scanner::_mn){
          p -> push("fact");
          p -> push("-");
          ret = "chido";
        }
        else if(t == scanner::_adm){
          p -> push("fact");
          p -> push("!");
          ret = "chido";
        }
        else if(t == scanner::_pi){
          p -> push(")");
          p -> push("select");
          p -> push("(");
          ret = "chido";
        }
        else if(t == scanner::_id || t == scanner::_nat ||
                t == scanner::_real || t == scanner::_true ||
                t == scanner::_false){
                  p -> push("atom");
                  ret = "chido";
                }
        else ret = "error";
      break;
      case 21://atom
        if(t == scanner::_id){
          p -> push("id");
          ret = "chido";
        }
        else if(t == scanner::_nat){
          p -> push("nat");
          ret = "chido";
        }
        else if(t == scanner::_real){
          p -> push("real");
          ret = "chido";
        }
        else if(t == scanner::_true){
          p -> push("true");
          ret = "chido";
        }
        else if(t == scanner::_false){
          p -> push("false");
          ret = "chido";
        }
        else ret = "error";
      break;
    }
    return ret;
}
string parse::inv(string c){
  string aux = "";
  for(int i = c.length();i >= 0;i--){
    aux+= c[i];
  }
  return aux;
}
void parse::pars(string c){
  string cadena = c;
  string aux = "",in = "";
  int j = 0,pos = 0,x = 1;
  aux = inv(cadena);
  cadena = "";
  while(x != aux.length()){

      if(aux[x] != ' ')cadena += aux[x];
      else{
        in = inv(cadena);
        p -> push(in);
        cadena = "";
      }
      x++;
  }
  in = inv(cadena);
  //cout <<"cadena: "<<cadena<<"in: "<<in<<"\n";
  p -> push(in);
  //p -> print();
}
bool parse::isTerm(string t){
  bool flag = false;
  for(int i = 0;i <= 29;i++){
    if(t == term[i])flag = true;
  }
  if(flag == true)return true;
  else return false;
}
scanner::token parse::stringToToken(string s){
  scanner::token ret;
  int id;
  for(int i = 0;i <= 29;i++){
    if(s == term[i])id = i;
  }
  switch(id){
    case 0:
      ret = scanner::_pt;
    break;
    case 1:
      ret = scanner::_sem;
    break;
    case 2:
      ret = scanner::_var;
    break;
    case 3:
      ret = scanner::_twopt;
    break;
    case 4:
      ret = scanner::_get;
    break;
    case 5:
      ret = scanner::_put;
    break;
    case 6:
      ret = scanner::_cma;
    break;
    case 7:
      ret = scanner::_what;
    break;
    case 8:
      ret = scanner::_plo;
    break;
    case 9:
      ret = scanner::_aper;
    break;
    case 10:
      ret = scanner::_iq;
    break;
    case 11:
      ret = scanner::_dif;
    break;
    case 12:
      ret = scanner::_lq;
    break;
    case 13:
      ret = scanner::_liq;
    break;
    case 14:
      ret = scanner::_mq;
    break;
    case 15:
      ret = scanner::_miq;
    break;
    case 16:
      ret = scanner::_ms;
    break;
    case 17:
      ret = scanner::_mn;
    break;
    case 18:
      ret = scanner::_por;
    break;
    case 19:
      ret = scanner::_slash;
    break;
    case 20:
      ret = scanner::_adm;
    break;
    case 21:
      ret = scanner::_pi;
    break;
    case 22:
      ret = scanner::_pd;
    break;
    case 23:
      ret = scanner::_id;
    break;
    case 24:
      ret = scanner::_nat;
    break;
    case 25:
      ret = scanner::_real;
    break;
    case 26:
      ret = scanner::_true;
    break;
    case 27:
      ret = scanner::_false;
    break;
    case 28:
      ret = scanner::_eof;
    break;
  }
  return ret;

}
void parse::ll_one(char *c){

scanner scan(c);
scanner::token t;
string x;
string pi;
int i = 0 ;

t = scan.get();
p -> push("stseq");
  while(!p -> empty()){
    x = p -> pop();
    if(isTerm(x)){
        if(stringToToken(x) == t){
          //cout <<"igual\n";
          t = scan.get();
        }
        else cout<<"Resultado: código incorrecto\n";
    }
    else{
      //cout <<"Generador"<<"\n";
      pi = controller(x,t);
      //p ->print();
        if(pi == "error")cout <<"Resultado: código incorrecto\n";
    }
    i++;
 }
 t = scan.get();
if(t == scanner::_eof)cout <<"Resultado: código correcto\n";
//p -> print();
}
