class stack{
private:
  class Nodo{
  public:
    string data;
    Nodo *next;
  };
  Nodo *raiz;
public:
  stack();
  ~stack();
  void push(string);
  string pop();
  void print();
  bool empty();
};
