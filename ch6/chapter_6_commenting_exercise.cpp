// Name
// Course Number
// Chapter 6 Homework
// Date

// #include "PPP.h"
// #include "PPP_support.h"
#include "PPPheaders.h"

//------------------------------------------------------------------------------
// tokens are the units of input provided by our user
// tokens can be an operator (+, -, *, /, (, )) or a number
class Token {
public:
  char kind;    // what kind of token (operator or '8' for numbers)
  double value; // for numbers: store the numeric value
  // Constructor for operator tokens (no value needed)
  Token(char ch) // make a Token from a char
      : kind(ch), value(0) {}
  // Constructor for number tokens (need both kind and value)
  Token(char ch, double val) // make a Token from a char and a double
      : kind(ch), value(val) {}
};

//------------------------------------------------------------------------------

Token get_token() // read a token from cin - returns a token / what was read as
                  // an input
{
  char ch;
  cin >> ch; // note that >> skips whitespace (space, newline, tab, etc.)

  switch (ch) {
    // handle operator tokens
    // not yet   case ';':    // for "print"
    // not yet   case 'q':    // for "quit"
  case '(':
  case ')':
  case '+':
  case '-':
  case '*':
  case '/':
    return Token(ch); // let each character represent itself
    // handle numeric tokens (including decimal point)
  case '.':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9': {
    cin.putback(ch); // put digit back into the input stream
    double val;
    cin >> val; // read a floating-point number
    return Token(
        '8', val); // let '8' represent "a number" - 8 is an arbitrary choice
  }
  default:
    error("Bad token"); // invalid character encountered
  }
}

//------------------------------------------------------------------------------

double expression(); // read and evaluate a Expression

//------------------------------------------------------------------------------

double term(); // read and evaluate a Term

//------------------------------------------------------------------------------

double primary() // read and evaluate a Primary
{
  Token t = get_token();
  switch (t.kind) {
  case '(': // handle '(' expression ')'
  {
    double d = expression(); // evaluate the expression
    t = get_token();
    if (t.kind != ')') // ensure matching closing parenthesis
      error("')' expected");
    return d;
  }
  case '8':         // we use '8' to represent a number
    return t.value; // return the number's value
  default:
    error("primary expected");
  }
}
//------------------------------------------------------------------------------
// main function - repeatedly reads and evaluates expressions
int main() try {
  // keep reading expressions until the end of input (ctrl + d on unix, ctrl + z
  // on windows)
  while (cin)
    cout << expression() << '\n'; // evaluate and print result with prompt
  cin.ignore();                   // clear remaining inputs
  cin.get();                      // wait for user to press enter
} catch (exception &e) {
  cerr << e.what() << endl; // print error message
  cin.ignore();
  cin.get();
  return 1; // return error code
} catch (...) {
  cerr << "exception \n"; // catch any exceptions
  cin.ignore();
  cin.get();
  return 2; // return different error code
}

//------------------------------------------------------------------------------
// handles addition and subtraction (lowest precedence)
// grammar: expression = Term ('+' or '-') Term
double expression() {
  double left = term();  // read and evaluate a the first term
  Token t = get_token(); // get the next token (could be +, -, or other)
  //
  // keep processing + and - operators (left-to-right)
  while (true) {
    switch (t.kind) {
    case '+':
      left += term();  // evaluate Term and add to result
      t = get_token(); // get next token for loop continuation
      break;
    case '-':
      left -= term();  // evaluate next Term and subtract from result
      t = get_token(); // get next token for loop continuatio
      break;
    default:
      return left; // finally: no more + or -: return the answer
    }
  }
}

//------------------------------------------------------------------------------
// handles multiplication and division (higher precedence than +/-)
// grammar: term = primary ('*' or '/') primary
double term() {
  double left = primary(); // read and evaluate the first primary
  Token t = get_token();   // get the next token

  // keep processing * and / operators (left to right)
  while (true) {
    switch (t.kind) {
    case '*':
      left *= primary(); // evaluate next primary and multiply
      t = get_token();
      break;
    case '/': {
      double d = primary(); // evaluate next primary (divisor)
      if (d == 0)           // check for division by zero
        error("divide by zero");
      left /= d; // perform division
      t = get_token();
      break;
    }
    default:
      return left;
    }
  }
}
