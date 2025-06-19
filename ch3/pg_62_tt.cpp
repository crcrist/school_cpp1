#include "PPPheaders.h"
#include <iostream>

constexpr double yen_to_dollar = 0.0070;
constexpr double kroner_to_dollar = 0.099;
constexpr double pounds_to_dollar = 1.35;

int main() {

  double amount = 0;
  char unit = ' ';
  cout << "please enter an amount followed by your current currency unit.\n(y) "
          "for yen, (k) for kroner, (p) for pounds.\n";
  cin >> amount >> unit;
  if (unit == 'y')
    cout << amount << " amount == " << amount * yen_to_dollar << " dollars\n";
  else if (unit == 'k')
    cout << amount << " amount == " << amount * kroner_to_dollar
         << " dollars\n";
  else if (unit == 'p')
    cout << amount << " amount == " << amount * pounds_to_dollar
         << " dollars\n";
  else
    cout << "incorrect input, try again\n";

  return 0;
}
