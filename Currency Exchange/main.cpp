/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// Uses only one exchange (Deosn't update exchange rates), only uses simple math (multiplicatiion), simple switch cases.
double
currency_convertor (double value, int type)
{
  double money_convert;
  switch (type)
    {
    case 1:
      money_convert = value * 0.95;
      break;
    case 2:
      money_convert = value;
      break;
    case 3:
      money_convert = value * 0.82;
      break;
    case 4:
      money_convert = value * 53.46;
      break;
    }
  return money_convert;


}

void
currency_reader (double value, int type, int type_conv)
{
  double money_read;
  switch (type)
    {
    case 1:
      money_read = 1.05 * value;
      break;
    case 2:
      money_read = value;
      break;
    case 3:
      money_read = 1.23 * value;
      break;
    case 4:
      money_read = 0.019 * value;
      break;
    }
  cout << currency_convertor (money_read, type_conv);
}

void
run_currency_convertor ()
{
  cout <<
    "\nPlease enter the type of currency you are inputing\n 1 - for euro\n 2 - dollar\n 3 - pound\n 4 - birr\n";
  double money;
  int type_input, type_convertor;
  cin >> type_input;
  cout << "Please enter value\n";
  cin >> money;
  cout <<
    "Please enter the type of currency you want to change to\n 1 - for euro\n 2 - dollar\n 3 - pound\n 4 - birr\n";
  cin >> type_convertor;


  currency_reader (money, type_input, type_convertor);
}

int
main ()
{
  char task;
  while (task != 'x')
    {
      cout << "Enter any key to continue, x to exit\n";
      cin >> task;
      if (task == 'x')
	{
	  break;
	}
      else
	{
	  run_currency_convertor ();
	}
      //run_currency_convertor();
    }

  return 0;
}

