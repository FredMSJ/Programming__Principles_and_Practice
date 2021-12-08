#include "../../lib/std_lib_facilities.h"

int main()
{
  vector<int> v = {5, 7, 9, 4, 6, 8};
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << '\n';
  }

  cout << '\n'
       << '\n';

  for (int x : v) //"For each int x in v"
  {
    cout << x << '\n';
  }

  keep_window_open();
}

//A vector "knows" its size, so we can print the elements of a vector like above: