#include "../../lib/std_lib_facilities.h"

int main()
{
  string your_name;
  string fisrt_name;
  string friend_name;
  char friend_sex = 0;
  int age;

  cout << "Enter your name: \n";
  cin >> your_name;
  cout << "Enter the name of the person you want to write:\n";
  cin >> fisrt_name;
  cout << "Enter one friend name: \n";
  cin >> friend_name;
  cout << "Your friend sex: (M to male || F to female) \n";
  cin >> friend_sex;
  cout << "Your friend age: \n";
  cin >> age;

  //start the letter
  cout << "\n\nDear " << fisrt_name << ", how are you? I am fine. I miss you.\n"
       << "Hope you're ok. Please send me updates of you, ok?\n"
       << "Hey, have you seen " << friend_name << "? Miss you both!\n";

  if (friend_sex == 'M')
  {
    cout << "If you see " << friend_name << " please ask him to call me. \n";
  }

  if (friend_sex == 'F')
  {
    cout << "If you see " << friend_name << " please ask her to call me. \n";
  }

  cout << "I hear you just had a birthday and you are " << age << " years old.\n";

  if (age <= 0 || age >= 110)
  {
    simple_error("you're kidding!");
  }

  if (age <= 12)
  {
    cout << "Next year you will be " << age++ << '\n';
  }

  if (age == 17)
  {
    cout << "Next year you will be able to vote.\n";
  }

  if (age >= 70)
  {
    cout << "I hope you are enjoying retirement.\n";
  }

  cout << "Yours sincerely,\n\n " << your_name << "\n\n";

  keep_window_open();

  return 0;
}