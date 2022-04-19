#include "../../lib/std_lib_facilities.h"

constexpr double cm_to_m {0.01};
constexpr double in_to_m {2.54*cm_to_m};
constexpr double ft_to_m {12.0*cm_to_m};

const vector<string> legal_units {"cm", "in", "ft", "m"};

bool legalUnit(string unit)
{
  bool legal = false;
  for (auto legal_unit : legal_units)
  {
    if (unit == legal_unit)
    {
      legal = true;
    }
  }
  return legal;
}

void printLegalUnits()
{
  cout  
    << "\tcm for centimeters\n"
    << "\tm for meters\n"
    << "\tin for inches\n"
    << "\tft for feets\n";
}

double convertToMeter(double val, string unit)
{
  if("cm" == unit)
  {
    return val * cm_to_m;
  }

  if("in" == unit)
  {
    return val * in_to_m;
  }

  if("ft" == unit)
  {
    return val * ft_to_m;
  }
  
  return val;
}


int main()
{
  vector<double>vetor;

  bool first {true};
  double val {0.0};
  double valMeter {0.0};
  double smallest {0.0};
  double largest {0.0};
  string unit {" "};

  printLegalUnits();
  
  string resp = "continue";


  while(resp != "N")
  { 
    cout << "Please enter a number followed by unit" << '\n';
    cin >> val >> unit;

    

    if(legalUnit(unit))
    {
      valMeter = convertToMeter(val, unit);

      cout << val << unit << '\n';

      if(unit != "m")
      {
        cout << "(" << valMeter << "m)\n";
      }

      if(first == true)
      {
        first = false;
        cout << " is the first value and therefore the smallest and largest so far.\n";
        
      }

      if(vetor.size() < 2)
      {
        vetor.push_back(valMeter);
      }
    

      if (vetor.size() == 2)
      {
        sort(vetor);
        if(vetor[0] > valMeter)
        {
          vetor[0] = valMeter;
        }
        if(vetor[1] < valMeter)
        {
          vetor[1] = valMeter;
        }
        
        cout << "the smallest so far is " << vetor[0] << "\n" << "the largest so far is " << vetor[1] << "\n";

      }
    }

    cout << "Do you wanna continue? Y for Yes, N for No" << '\n';
    cin >> resp;


  }

  keep_window_open();
}