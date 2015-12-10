#include <iostream>
#include "parse.cpp"


using namespace std;

int main (){
char file[10];
printf("Whart's the file name?.\n");
gets(file);

  parse p;

p.printScaner(file);
p.ll_one(file);
/*printf("produccion: %s\n",p.controller(10,scanner::_what));
p.pars(p.controller(10,scanner::_what));*/


  /*ifstream archivo (file);


  while(!archivo.eof()){
    char caracter = archivo.get();
    cout << caracter;
  }
archivo.close();*/



  /* scanner scan(file);
   scanner::token t;*/


  /* do{

     t = scan.get();
      //printf("lexema: %s\n",scan.lexema());
		switch(t){
			case scanner::_nat: cout <<"Natural: "<<"["<<scan.lexema()<<"]"<<"\n";break;
			case scanner::_real: cout <<"Real: "<<"["<<scan.lexema()<<"]"<<"\n";break;
			case scanner::_id: cout <<"Id: "<<"["<<scan.lexema()<<"]"<<"\n";break;
			case scanner::_err: cout <<"Error\n";break;
      case scanner::_pr: cout <<"Palabra reservada: "<<"["<<scan.lexema()<<"]"<<"\n";break;
			case scanner::_eof: cout <<"Fin de archivo\n";break;
      case scanner::_pi: cout <<"(\n";break;
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
  }while(t != scanner::_err && t != scanner::_eof);*/
//_iq,_dif,_mq,_lq,_miq,_liq
return 0;

}
