#include "step0.h"

int main() {
  std::string input;
  for (;;){
    std::cout<<"user> ";
    if (!std::getline(std::cin, input)) break;
    std::cout << rep(input) << std::endl;
  }
  return 0;
}