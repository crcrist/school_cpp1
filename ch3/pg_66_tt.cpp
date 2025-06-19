#include "PPPheaders.h"
#include <iostream>

int main() {
  int i = 0;
  while (i < 26) {
    cout << char('a' + i) << '\t' << i << '\n';
    ++i;
  }

  return 0;
}
