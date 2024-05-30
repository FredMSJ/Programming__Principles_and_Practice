#include "../../lib/std_lib_facilities.h"

int main()
{
  int val1 = 0;
  int val2 = 0;
  int val3 = 0;

  cout << "Please enter three integer values: Like(1 2 3) \n";
  cin >> val1 >> val2 >> val3;

  cout << "Values read : " << val1 << ", " << val2 << ", " << val3 << '\n';

  int small = 0;
  int mid = 0;
  int larg = 0;

  if (val1 <= val2 && val1 <= val3)
  {
    small = val1;
    if (val2 <= val3)
    {
      mid = val2;
      larg = val3;
    }
    else
    {
      mid = val3;
      larg = val2;
    }
  }
  else if (val2 <= val1 && val2 <= val3)
  {
    small = val2;
    if (val1 <= val3)
    {
      mid = val1;
      larg = val3;
    }
    else
    {
      mid = val3;
      larg = val1;
    }
  }
  else
  {
    small = val3;
    if (val1 <= val2)
    {
      mid = val1;
      larg = val2;
    }
    else
    {
      mid = val2;
      larg = val1;
    }
  }

  cout << "Values ordered : " << small << ", " << mid << ", " << larg << '\n';

  //Ok, but when tha number get equal? Simple: the >= or <= solute it

  keep_window_open();
}