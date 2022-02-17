#pragma once
#include "includeInAll.h"
#include "lexer.h"

void run();
  vector<string> readFile(string f){
  string lnTxt;
  vector<string> ftxt;
  ifstream file(f);
  while (getline(file, lnTxt)) ftxt.push_back(lnTxt);
  return ftxt;
}
void run(){
  string fn;

  getline(cin, fn);
  vector<string> ftxt;
  Lexer lexer = Lexer(ftxt);
  
}