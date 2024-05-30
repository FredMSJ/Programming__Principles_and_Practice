#include "../../lib/std_lib_facilities.h"

int main()
{
  int pennie = 0;
  int nickel = 0;
  int dime = 0;
  int quarter = 0;
  int hdollar = 0;
  int dollar = 0;

  cout << "How many pennies do you have? \n";
  cin >> pennie;
  cout << "How many nickels do you have? \n";
  cin >> nickel;
  cout << "How many dimes do you have? \n";
  cin >> dime;
  cout << "How many quarters do you have? \n";
  cin >> quarter;
  cout << "How many half-dollars do you have? \n";
  cin >> hdollar;
  cout << "How many dollars do you have? \n";
  cin >> dollar;

  if (pennie == 1)
    cout << "You have " << pennie << " pennie.\n";
  else
    cout << "You have " << pennie << " pennies.\n";

  if (nickel == 1)
    cout << "You have " << nickel << " nickel.\n";
  else
    cout << "You have " << nickel << " nickels.\n";

  if (dime == 1)
    cout << "You have " << dime << " dime.\n";
  else
    cout << "You have " << dime << " dimes.\n";

  if (quarter == 1)
    cout << "You have " << quarter << " quarter.\n";
  else
    cout << "You have " << quarter << " quarters.\n";

  if (hdollar == 1)
    cout << "You have " << hdollar << " half-dollar.\n";
  else
    cout << "You have " << quarter << " half-dollars.\n";

  if (dollar == 1)
    cout << "You have " << dollar << " dollar.\n";
  else
    cout << "You have " << dollar << " dollars.\n";

  float total = (1 * pennie) + (5 * nickel) + (10 * dime) + (25 * quarter) + (50 * hdollar) + (100 * dollar);

  cout << "You have $ " << total / 100 << " or " << total << " cents. \n";

  keep_window_open();
}

/*  
1 pennie = 1 cent
1 nickel = 5 cents
1 dime = 10 cents
1 quarter = 25 cents
1 half dollar = 50 cents
1 dollar = 100 cents
*/