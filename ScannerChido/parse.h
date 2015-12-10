#include "scanner.cpp"

using namespace std;

class parse{

private:
  string inv(string);
  void pars(string);
  string controller(string ,scanner::token);
  bool isTerm(string);
  scanner::token stringToToken(string);
  int stringToInt(string);

public:
  void printScaner(char *);
  void ll_one(char *);
};
