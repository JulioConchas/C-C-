#include <fstream>

class scanner{
public:
  typedef enum{ _nat, _real,_id,_err,_plo,_eof,
                _pi,_pd,_ms,_mn,_por,_slash,_aper,
                _adm,_cma,_pt,_sem,_twopt,_what,
                _iq,_dif,_mq,_lq,_miq,_liq,_true,
                _get,_var,_put,_false }token;
  int sdl;
private:
  static const int undef;

  std::ifstream file;

  char next();
  void back();
  void accept();
  void fail();

  std::streampos pos;

  token num();

  void comments();
  void wsp();
  void clean();
  bool eof();
  token operadores();
  token opRel();
  token id();

public:
  char *lexema();
  scanner(char *);
  ~scanner();


  token get();
};
