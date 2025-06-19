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
// there are 3 repeated words
// the definition of a repeated word is just if the word previous to the
// currently read word is the same. However, if the repeated words are separated
// by another word, for example 'he did he', the program would not say that 'he'
// is a repeated word, as it is only comparing the currently read word to the
// previous. She she is not considered a repeating word due to the difference in
// capitalization
