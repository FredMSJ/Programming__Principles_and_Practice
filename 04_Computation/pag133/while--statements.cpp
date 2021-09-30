#include "../../lib/std_lib_facilities.h"

//You should declare the function to works fine.
int square(int x)
{
  return x * x;
}

int main()
{

  int i = 0;
  while (i < 100)
  {
    cout << i << '\t' << square(i) << '\n';
    i++;
  }

  keep_window_open();
  return 0;
}