#include "PPPheaders.h"

int main() {
  cout << "Please enter your first name and age\n";
  string first_name = "???";
  int age = -1;
  cin >> first_name >> age;
  double age_in_months = age * 12;
  cout << "Hello," << first_name << " (age " << age_in_months << ")\n";
  return 0;
}
