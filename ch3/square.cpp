#include "PPPheaders.h"
#include <iostream>

int square(int x) {
  int length = x;
  int result = 0;

  for (int i = 0; i < length; i++) {
    result += x;
  }

  return result;
}

int main() {
  int x = 1;

  for (int i = 0; i < 100; ++i) {
    cout << i << '\t' << square(i) << '\n';
  }

  return 0;
}
