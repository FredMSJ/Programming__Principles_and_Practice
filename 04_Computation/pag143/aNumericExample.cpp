#include "../../lib/std_lib_facilities.h"

int main()
{
  vector<double> temps;           // temperatures vector
  for (double temp; cin >> temp;) // read into temp
  {
    temps.push_back(temp); // put temp into vector

    double sum = 0;
    for (int x : temps)
    {
      sum += x;
    }

    cout << "Average temperature: " << sum / temps.size() << '\n';

    sort(temps);
    cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

    cout << "Array size: " << temps.size() << '\n';
  }

  keep_window_open();
}