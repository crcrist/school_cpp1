#include "PPPheaders.h"
#include <iostream>

int main() {
  int i = 0;
  for (i = 224; i < 250; ++i) {
    cout << char('a' + i) << '\t' << i << '\n';
  }

  return 0;
}
