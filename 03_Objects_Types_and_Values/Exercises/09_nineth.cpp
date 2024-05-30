#include "../../lib/std_lib_facilities.h"

int main()
{
  cout << "Please enter a integer number as a string : \n";
  string s;
  int n;

  while (cin >> s)
  {
    if (s == "zero")
    {
      cout << "The integer value of " << s << " is 0\n";
    }
    else if (s == "one")
    {
      cout << "The integer value of " << s << " is 1\n";
    }
    else if (s == "two")
    {
      cout << "The integer value of " << s << " is 2\n";
    }
    else if (s == "three")
    {
      cout << "The integer value of " << s << " is 3\n";
    }
    else if (s == "four")
    {
      cout << "The integer value of " << s << " is 4\n";
    }
    else if (s == "exit")
    {
      break;
    }
    else
      cout << "Sorry, does not have a numeric value I understand. If wanna stop, tap exit\n";
    cout << "Please enter another integer number as a string : \n";
  }
  keep_window_open();
}