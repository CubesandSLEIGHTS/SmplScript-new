#include "step0.h"
#include "linenoise.hpp"

int main() {
  const auto history_path = "history.txt";
  linenoise::LoadHistory(history_path);
  std::string input;
  for (;;){
    auto quit = linenoise::Readline("user> ", input);
    if (quit) break;
    linenoise::AddHistory(input.c_str());
    std::cout << rep(input) << std::endl;
  }
  linenoise::SaveHistory(history_path);
  return 0;
}