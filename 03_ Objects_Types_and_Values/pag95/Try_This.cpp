#include "../../std_lib_facilities.h"

int main()
{
  cout << "Please insert your name and your age(press enter):\n";
  string name;
  double age;
  cin >> name >> age;
  double ageInMonths = age * 12;

  cout << name << ", your age in months is: " << ageInMonths << '\n';
  keep_window_open();

  return 0;
  //T for t
}