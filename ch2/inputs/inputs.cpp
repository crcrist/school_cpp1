// #include "PPP.h"
#include <iostream>
#include <string>

int math(int n) {
  n = n + n;
  return n;
}

int main() {
  int number_of_words = 0;
  std::string previous;
  std::string current;
  while (std::cin >> current) {
    ++number_of_words; // each time a word is encountered, add to the count
    if (previous == current)
      std::cout << "word number " << number_of_words << " repeated: " << current
                << '\n';
    previous = current;
  }
}
