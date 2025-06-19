
// Connor Crist
// Chapter 4 Homework
// Intro to Comp Sci I
// 6/7/2025
// David Stafford
/*
Assignment: Fix this broken script.
Submit your.cpp file.
Document each of the items you fix at the bottom in a multiline comment.
For each fix, please notate what kind of error it is (i.e. compile time/link
time/run time/logic ) Include a screenshot of your working program in Visual
Studio 2022.
*/

/*
this was originally #include <PPP.h>, but should be "PPP.h".
I am changing to PPPheaders.h due to my config
- compile time error
*/
// #include "PPP.h"
#include "PPPheaders.h"
extern int x;
int main() {
  /* this was originally "str" - changed to string
   * - compile time error*/
  string center;
  int chance;
  /* the arrows here were pointed like this "cin <<" but needs to be "cin
   * - compile time error>>"*/
  cin >> chance;
  cin >> center;
  // Zoolander
  cout << "Mugatu: And now, the Derek Zoolander Center for Kids Who Can't Read "
       << "Good and Wanna Learn to Do Other Stuff Good Too.\n ";
  cout << "Derek Zoolander : What is this? A center for ants? How can we be "
          "expected to teach children to learn how to read if they can't even "
          "fit inside the building?\n ";

  cout << "Mugatu : Derek, it’s just a model.\n";
  cout << "Derek Zoolander : I don't want to hear your excuses! The center has "
          "to be at least... "
       /* was originally "centers" - changed to "center" to reflect the
          variable name
          - compile time error*/
       << center << " times bigger than this!  \n ";
  // Dumb and Dumber
  cout << "Lloyd Christmas : What are the chances of a guy like you and a girl "
          "like me... ending up together?\n";
  cout << "Mary Swanson : Not good.\n";
  cout << "Lloyd Christmas : Not good like one in a hundred?\n";
  cout << "Mary Swanson : I'd say more like one in a " << chance << ".\n";
  cout << "Lloyd Christmas : So you're telling me there's a chance? Yeah!";
  /*was originally "return;" changed to "return 0;
   * - compile time error"*/
  return 0;
}
