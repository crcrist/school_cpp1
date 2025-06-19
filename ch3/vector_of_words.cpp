// ctrl + d: finish program, instead of kill (ctrl + c)
#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

// Don't include PPPheaders.h to avoid conflicts
using namespace std;

int main() // simple dictionary: list of sorted words
{
  // simple dictionary: list of sorted words
  vector<string> words;

  for (string temp; cin >> temp;) {
    // read whitespace-separated words
    words.push_back(temp);
    // put into vector
  }

  cout << "Number of words: " << words.size() << '\n';

  ranges::sort(words);
  // sort the words

  string disliked_1 = "poopoo";
  string disliked_2 = "peepee";

  for (int i = 0; i < words.size(); ++i) {
    if (i == 0 || words[i - 1] != words[i]) {
      // is this a new word?
      if (words[i] == "peepee" || words[i] == "poopoo") {
        cout << "BLEEP\n";
      } else {
        cout << words[i] << "\n";
      }
    }
  }

  return 0;
}
