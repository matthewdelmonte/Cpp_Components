#include <iostream>
using namespace std;

int main()
{

Start:
//Input first integer
	int numb1 = 0;
	cout << " Enter first number ";
	cin >> numb1;

//Input second integer
	int numb2 = 0;
	cout << " Enter second number ";
	cin >> numb2;

//Input arithemtic symbol
	char userSelection = '\0';
	cout << " Enter s = subtract, m = multiply, d = divide, anything else to add " << endl;
	cin >> userSelection;

//If then statement
	int result = 0;
	if (userSelection == 's')
	result = numb1 - numb2;
	else if
	(userSelection == 'm')
	result = numb1 * numb2;
	else if
	(userSelection == 'd')
	result = numb1 / numb2;
	else
	result = numb1 + numb2;

	cout << " The answer is " << result << endl;
	
	cout << " Do you wish to perform another operations (y or n)? " << endl;
	char repeat = 'y';
	cin >> repeat;

	if (repeat == 'y')
	goto Start;

	cout << " Goodbye! " << endl;

	return 0;
}
