#include "../../lib/std_lib_facilities.h"

int main()
{
  vector<double>vetor;

  
  
  double enter;
  string resp;


  while(resp != "N")
  { 
    char unit;
    cout << "Please enter a number followed by unit" << '\n';
    cin >> enter >> unit;
    //Start traits

    // if (unit == "m")
    // {//problem with String...
    //   cout << "funciona if \n"; 
    // }

    cout << unit << '\n';

    if (unit == 'y' ||  unit == 'yard' || unit == 'meter' || unit == 'km' || unit == 'gallons' || unit == NULL)
    {
      cout << "Please inser a valid unit" << '\n';
    }


    if (unit == 'm')
    {
      enter = enter * 100;
    }
    
    if(unit == 'in')
    {
      enter = enter * 2.54;
    }

    if(unit == 'ft')
    {
      enter = enter * 30.48;
    }

    else
    {
      cout << "Not a unit I know" << '\n';
    }

    if(enter != NULL || unit != NULL)
    {
      if(vetor.size() < 2)
      {
        vetor.push_back(enter);
      }
    

      if (vetor.size() == 2)
      {
        sort(vetor);
        if(vetor[0] > enter)
        {
          vetor[0] = enter;
        }
        if(vetor[1] < enter)
        {
          vetor[1] = enter;
        }
        
        cout << "the smallest so far is " << vetor[0] << "\n" << "the largest so far is " << vetor[1] << "\n";

      }
    }

    cout << "Do you wanna continue? Y for Yes, N for No" << '\n';
    cin >> resp;


  }

  keep_window_open();
}