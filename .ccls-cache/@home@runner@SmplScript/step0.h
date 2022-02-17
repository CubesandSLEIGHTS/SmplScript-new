#include <string>
#include <iostream>

std::string read(std::string input){
  return input;
}

std::string eval(std::string input){
  return input;
}

std::string output(std::string input){
  return input;
}

std::string rep(std::string input){
  auto ast = read(input);
  auto result = eval(ast);
  return print = output(result);
}