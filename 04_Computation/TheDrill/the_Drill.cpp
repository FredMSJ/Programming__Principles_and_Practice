#include "../../lib/std_lib_facilities.h"

int main()
{
  vector<double>vetor;
  for(double enter; cin >> enter;)
  {
    
    if(vetor.size() < 2)
    {
      vetor.push_back(enter);
      cout << "teste" << "\n";
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

  keep_window_open();
}