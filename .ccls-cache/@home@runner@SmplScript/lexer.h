#pragma once
#include "includeInAll.h"
using namespace constant;


class Lexer{
  vector<string> ftxt;
  vector<string> tokens;

  public:
    Lexer(vector<string> ft);

};

Lexer::Lexer(vector<string> ft){
  ftxt = ft;
}



