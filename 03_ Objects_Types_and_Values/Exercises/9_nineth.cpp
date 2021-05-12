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
      n = 0;
    }
    else if (s == "one")
    {
      n = 1;
    }
    else if (s == "two")
    {
      n = 2;
    }
    else if (s == "three")
    {
      n = 3;
    }
    else if (s == "four")
    {
      n = 4;
    }
    else if (s == "exit")
    {
      break;
    }
    else
      cout << "Sorry, does not have a numeric value I understand. If wanna stop, tap exit\n";
    cout << s << " has the value " << n << "\n";
    cout << "Please enter another integer number as a string : \n";
  }
  keep_window_open();
}