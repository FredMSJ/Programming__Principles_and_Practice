#include "../../lib/std_lib_facilities.h"

int main()
{
  constexpr double dollar = 1;

  double length = 1;
  char unit = 0;

  cout << "Select what you need to convert to dollar and how much: (y to yen, e to euro, p to pounds)\n";
  cin >> unit >> length;

  if (unit == 'y')
  {
    //1 Yen ==  0.0091  Dollar
    cout << length << " yen's is US$" << 0.0091 * length << "\n";
  }
  else if (unit == 'e')
  {
    //1 Eur ==  1.18  Dollar
    cout << length << " euros is US$" << 1.18 * length << "\n";
  }
  else if (unit == 'p')
  {
    //1 Pou ==  1.38  Dollar
    cout << length << " pounds is US$" << 1.38 * length << "\n";
  }
  else
  {
    cout << "Please repeat the process and select a valid option\n";
  }

  keep_window_open();
}
