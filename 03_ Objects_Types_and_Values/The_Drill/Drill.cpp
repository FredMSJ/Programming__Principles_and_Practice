#include "../../lib/std_lib_facilities.h"

int main()
{
  string fisrt_name;
  string friend_name;
  cout << "Enter the name of the person you want to write:\n";
  cin >> fisrt_name;
  cout << "Enter one friend name: \n";
  cin >> friend_name;

  //start the letter
  cout << "Dear " << fisrt_name << ", how are you? I am fine. I miss you.\n"
       << "Hope you're ok. Please send me updates of you, ok?\n"
       << "Hey, have you seen " << friend_name << " miss you both! ";

  keep_window_open();

  // desmonstrando programação para lucas
  return 0;
}