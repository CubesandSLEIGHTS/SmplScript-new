#pragma once
#include "includeInAll.hpp"
using namespace constant;

class Lexer{
  vector<string> ftxt;
  vector<string> tokens;

  public:
    Lexer(string fn);
    void readFile(string fn);

};

Lexer(string ft){
  ftxt = ft;
}



