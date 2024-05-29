#ifndef EXS_TOKEN_H
#define EXS_TOKEN_H

#include <string>

namespace exs {

template <class A>
class Token {
public:
  TokenType type;
  OperatorType optype;
  A *atom;
  Token(TokenType t): type(t), optype(NONE_OPERATOR), atom(NULL) {}
  Token(TokenType t, OperatorType o): type(t), optype(o), atom(NULL) {};
  Token(TokenType t, A *a): type(t), optype(NONE_OPERATOR), atom(a) {};
  std::string to_string() {
    if (type==EMPTY_TOKEN) {
      return "Token(EMPTY)";
    } else if (type==OPERATOR_TOKEN) {
      return "Token(OPERATOR "+std::to_string(optype)+")";
    } else {
      return "Token(ATOM "+atom->to_string()+")";
    }
  }
  void print() {
    std::cout << to_string() << "\n";
  };
};

}

#endif // EXS_TOKEN_H
