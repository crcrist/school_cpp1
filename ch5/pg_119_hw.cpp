#include "PPPheaders.h"

int main() {

  cout << "Please enter expression (we can handle +, -, *, and /)\n";
  cout << "add an x to end expression (e.g., 1+2*3x): ";
  int lval = 0;
  int rval = 0;
  cin >> lval;
  if (!cin)
    error("no first operand");

  for (char op; cin >> op;) {
    if (op != 'x')
      cin >> rval;
    if (!cin)
      error("no second operand");
    switch (op) {
    case '+':
      cout << "Expression: " << lval << op << rval << '\n';
      lval += rval;
      break;
    case '-':
      cout << "Expression: " << lval << op << rval << '\n';
      lval -= rval;
      break;
    case '*':
      cout << "Expression: " << lval << op << rval << '\n';
      lval *= rval;
      break;
    case '/':
      cout << "Expression: " << lval << op << rval << '\n';
      lval /= rval;
      break;
    default:
      cout << "Result: " << lval << '\n';
      return 0;
    }
  }
  error("bad expression");
}
