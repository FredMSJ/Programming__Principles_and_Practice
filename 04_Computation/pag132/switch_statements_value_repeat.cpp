#include "../../lib/std_lib_facilities.h"

//Same action for a set of values in switch statement.
int main()
{
  cout << "Please enter a digit\n";
  char a;
  cin >> a;
  switch (a)
  {
  case '0':
  case '2':
  case '4':
  case '6':
  case '8':
    cout << "is even\n";
    break;

  case '1':
  case '3':
  case '5':
  case '7':
    cout << "is odd\n";
    break;

  default:
    cout << "is not a digit\n";
    break;
  }

  keep_window_open();
}