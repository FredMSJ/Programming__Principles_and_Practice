#include "../../lib/std_lib_facilities.h"

int main()
{
  string operation;
  double val1 = 0;
  double val2 = 0;
  double res = 0;
  cout << "Please enter the operation followed by two operands : \n";
  while (cin >> operation >> val1 >> val2)
  {
    if (operation == "+" || operation == "plus")
      res = val1 + val2;
    else if (operation == "-" || operation == "minus")
      res = val1 - val2;
    else if (operation == "*" || operation == "mul")
      res = val1 * val2;
    else if (operation == "/" || operation == "div")
    {
      if (val2 == 0)
        error("trying to divide by zero");
      res = val1 / val2;
    }
    else if (operation == "end")
    {
      break;
    }
    else
    {
      cout << "Please just +, -, *, or /\n";
    }
    cout << val1 << operation << val2 << " == " << res << '\n';
    cout << "Please try again: (you can tap end to finish the program) \n";
  }
  cout << "exit because of bad input.\n";
  keep_window_open("~");
}
/*
string operation;
	double val1 = 0;	// first/leftmost operand
	double val2 = 0;	// second/rightmost operand
	cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two floating-point values separated by a space: ";
	
	while(cin >> operation >> val1 >> val2) {	// we do the following as long as we get "good" input
												// and then stop
												// loops will be explainied in detail in Chapter 4
		double res = 0;
		if (operation=="plus" || operation=="+") res = val1+val2;
		else if (operation=="minus" || operation=="-") res = val1-val2;
		else if (operation=="mul" || operation=="*") res = val1*val2;
		else if (operation=="div" || operation=="/") {
			if (val2==0) error("trying to divide by zero");
			res = val1/val2;
		}
		else error("sorry: bad operator: ",operation);

		cout << val1 << operation << val2 << " == " << res <<'\n';
		cout << "Please try again: ";
	}
	cout << "exit because of bad input\n";
	keep_window_open("~");	// For some Windows(tm) setups
*/