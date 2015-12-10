#include "scanner.h"
#include <cstdio>

const int scanner::undef = -1;
char lex[10];

scanner::scanner(char *fname):file(fname),pos(0){}
scanner::~scanner(){file.close();}

char scanner::next(){return file.get();}
void scanner::back(){file.seekg(-1,file.cur);}
void scanner::accept(){pos = file.tellg();}
void scanner::fail(){file.seekg(pos);}
char *scanner::lexema(){
  scanner::clean();
  return lex;
}
void scanner::clean(){
  for(int i = 0;i < 10;i++){
    if(lex[i] == ' '||lex[i] == '\n'||lex[i] == ';')lex[i] = '\0';
  }
}

//Reconocedores
scanner::token scanner::num(){
  int actual = 0, last,i = 0;
	token ret;

	while(actual != undef){

		last = actual;
		char c = next();
    lex[i] = c;
    //printf("lex :%s\n",lex);

		switch(actual){
			case 0:
				if(isdigit(c))actual = 1;
        else if(c == '.')actual = 2;
				else actual = undef;
				break;
			case 1:
				if(isdigit(c));
				else if(c == '.')actual = 2;
        else if(c == 'E' || c == 'e')actual = 4;
				else actual = undef;
				break;
			case 2:
				if(isdigit(c))actual = 3;
				else actual = undef;
				break;
			case 3:
				if(isdigit(c));
        else if(c == 'E'|| c == 'e')actual = 4;
				else actual = undef;
				break;
      case 4:
        if(c == '+' || c == '-')actual = 5;
        else actual = undef;
        break;
      case 5:
        if(isdigit(c))actual = 6;
        else actual = undef;
        break;
      case 6:
        if(isdigit(c));
        else actual = undef;
        break;
		}
    i++;
	}
	//si sales de ciclo es por que actual es undef
	if(last == 1){
		back();
		accept();
		ret =  _nat;
	}
	else if(last == 3){
	    back();
		accept();
		ret = _real;
	}
  else if(last == 6){
    back();
    accept();
    ret = _real;
  }
	else{
    for(int j = 0;j < 10;j++)lex[j] = '\0';
		fail();
		ret = _err;
	}
	return ret;

}
void scanner::wsp(){
  char c = next();
  int sl = 0;

   while(isspace(c)|| c == '\n'|| c == '\t'){
     if(c == '\n')scanner::sdl++;
      accept();
			c = next();
		}
		fail();
}
void scanner::comments(){
  int actual = 0,last;

  while(actual != undef){
      last = actual;
      char c = next();

      switch(actual){
        case 0:
          if(c == '/')actual = 1;
          else actual = undef;
          break;
        case 1:
          if(c == '/')actual = 2;
          else actual = undef;
          break;
        case 2:
          if(isalpha(c));
          else if(c == '\n'){
            scanner::sdl++;
            actual = 3;
          }
          else actual = undef;
          break;
        case 3:
          actual = undef;
          break;
        }
  }
  if(last == 3){
    //back();
    accept();
  }
  else{
    fail();
  }
}
bool scanner::eof(){
  if(file.eof())return true;
  else return true;
}
scanner::token scanner::opRel(){
  char c = next();
  token t;

  switch(c){
    case '=':
      accept();
      t = _iq;
      break;
    case '<':
      if(next() == '='){
        accept();
        t = _liq;
      }
      else{
        back();
        accept();
        t = _lq;
      }
      break;
    case '>':
      if(next() == '='){
        accept();
        t = _miq;
      }
      else{
        back();
        accept();
        t = _mq;
      }
      break;
      default:
      back();
      t = _err;
      break;
  }
  return t;

}
scanner::token scanner::operadores(){
  char c = next();
  token t;

  switch(c){
    case '(':
    //_p1
      accept();
      t = _pi;
      break;
    case ')':
    //_pd
      accept();
      t = _pd;
      break;
    case '+':
    //_ms
      accept();
      t = _ms;
      break;
    case '-':
    //_mn
      accept();
      t =  _mn;
      break;
    case '*':
    //_por
      accept();
      t =  _por;
      break;
    case '/':
    //_slash
      accept();
      t =  _slash;
      break;
    case '&':
    //_aper
      accept();
      t =  _aper;
      break;
    case '|':
    //_plo
      accept();
      t = _plo;
      break;
    case '!':
    //_adm
        if(next() == '='){
          accept();
          t = _dif;
        }
        else{
          back();
          accept();
          t =  _adm;
        }
       break;
    case ',':
    //_cma
      accept();
      t =  _cma;
      break;
    case '.':
    //_pt
      accept();
      t =  _pt;
      break;
    case ';':
    //_sem
      accept();
      t =  _sem;
      break;
    case ':':
    //_twopt
      accept();
      t =  _twopt;
      break;
    case '?':
    //_what
      accept();
      t =  _what;
      break;
    default:
      back();
      t =  _err;
      break;
    }
    return t;
}
scanner::token scanner::id(){
  int actual = 0,last,i = 0;
   token ret;

  while(actual != undef){
    last = actual;
    char c = next();
    lex[i] = c;

      switch(actual){
        case 0:
          if(c == 't')actual = 3;
          else if(c == 'f')actual = 7;
          else if(c == 'p')actual = 12;
          else if(c == 'g')actual = 15;
          else if(c == 'v')actual = 18;
          //palabras reservadas
          else if(c == '_')actual = 1;
          else if(isalpha(c))actual = 2;
          else actual = undef;
          break;
        case 1:
          if(c == '_' || isdigit(c));
          else if(isalpha(c))actual = 2;
          else actual = undef;
          break;
        case 2:
          if(c == '_' || isalnum(c));
          else actual = undef;
          break;
        case 3:
          if(c == 'r')actual = 4;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 4:
          if(c == 'u')actual = 5;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 5:
          if(c == 'e')actual = 6;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 6:
          actual = undef;
          break;
        case 7:
          if(c == 'a')actual = 8;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 8:
          if(c == 'l')actual = 9;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 9:
          if(c == 's')actual = 10;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 10:
          if(c == 'e')actual = 11;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 11:
          actual = undef;
          break;
        case 12:
          if(c == 'u')actual = 13;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 13:
          if(c == 't')actual = 14;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 14:
          actual = undef;
          break;
        case 15:
          if(c == 'e')actual = 16;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 16:
          if(c == 't')actual = 17;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 17:
          actual = undef;
          break;
        case 18:
          if(c == 'a')actual = 19;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 19:
          if(c == 'r')actual = 20;
          else if(c == '_' || isalnum(c))actual = 2;
          else actual = undef;
          break;
        case 20:
          actual = undef;
          break;
      }
      i++;
  }
  if(last == 2){
    back();
    accept();
    ret = _id;
  }
  else if(last == 6){
    back();
    accept();
    ret = _true;
  }
  else if(last == 11){
    back();
    accept();
    ret = _false;
  }
  else if(last == 14){
    back();
    accept();
    ret = _put;
  }
  else if(last == 17){
    back();
    accept();
    ret = _get;
  }
  else if(last == 20){
    back();
    accept();
    ret = _var;
  }
  else {
    for(int j = 0;j < 10;j++)lex[j] = '\0';
    fail();
    ret = _err;
  }
  return ret;
}
scanner::token scanner::get(){
  token t;

  wsp();
  comments();
  t = opRel();
  if(t != _err)return t;
  t = id();
  if(t != _err)return t;
  t = num();
  if(t != _err)return t;
  t = operadores();
  if(t != _err)return t;
  printf("Saltos de linea: %i\n",scanner::sdl);
  if(eof())return _eof;
  return _err;
}
