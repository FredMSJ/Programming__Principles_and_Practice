#include "../../lib/std_lib_facilities.h"

int main()
{
  vector<double> v;

  cout << v.size() << '\n'; // Int 0

  v.push_back(2.7);

  v.push_back(5.6);

  v.push_back(7.9);

  for (double x : v)
  {
    cout << x << '\n';
  }

  cout << v.size() << '\n'; // Int 3

  keep_window_open();
}