#include "PPPheaders.h"
#include <iostream>

constexpr double yen_to_dollar = 0.0070;
constexpr double kroner_to_dollar = 0.099;
constexpr double pounds_to_dollar = 1.35;
constexpr double franc_to_dollar = 1.22;

int main() {

  double amount = 0;
  char unit = ' ';
  cout << "please enter an amount followed by your current currency unit.\n(y) "
          "for yen, (k) for kroner, (p) for pounds, (f) for franc.\n";
  cin >> amount >> unit;

  switch (unit) {
  case 'y':
    cout << amount << " amount == " << amount * yen_to_dollar << " dollars\n";
    break;
  case 'k':
    cout << amount << " amount == " << amount * kroner_to_dollar
         << " dollars\n";
    break;
  case 'p':
    cout << amount << " amount == " << amount * pounds_to_dollar
         << " dollars\n";
    break;
  case 'f':
    cout << amount << " amount == " << amount * franc_to_dollar << " dollars\n";
    break;
  default:
    cout << "sorry incorrect character";
  }

  return 0;
}
