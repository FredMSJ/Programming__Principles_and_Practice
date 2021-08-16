#include "../../lib/std_lib_facilities.h"

int main()
{
  constexpr double dollar = 1;

  double length = 1;
  char unit = 0;

  cout << "Select what you need to convert to dollar and how much: (y to yen, e to euro, p to pounds)\n";
  cin >> unit >> length;

  switch (unit)
  {
  case 'y':
    //1 Yen ==  0.0091  Dollar
    cout << length << " yen's is US$" << 0.0091 * dollar << "\n";
    break;

  case 'e':
    //1 Eur ==  1.18  Dollar
    cout << length << " euros is US$" << 1.18 * dollar << "\n";
    break;

  case 'p':
    //1 Pou ==  1.38  Dollar
    cout << length << " pounds is US$" << 1.38 * dollar << "\n";
    break;

  default:
    cout << "Please repeat the process and select a valid option\n";
    break;
  }

  keep_window_open();
}

/*
* If-statement is easier to write than switch-statement;
* Think it work more logicaly in mind;
* Switch-statement is much clean and easier to understand the code than if-statement; 
* Switch-statement is more directly seen;
*/