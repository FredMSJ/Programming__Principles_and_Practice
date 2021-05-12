#include "../../lib/std_lib_facilities.h"

int main()
{
  int value = 0;

  cout << "Please enter one integer number : \n";

  while (cin >> value)
  {

    string res = "even";

    if (value % 2)
      res = "odd";

    cout << "The value " << value << " is a " << res << " number.\n";

    if (value == 0)
    {
      break; // Here you can see how to stop the while loop. With "break", of course.
    }
  }
  keep_window_open();
  return 0;
}