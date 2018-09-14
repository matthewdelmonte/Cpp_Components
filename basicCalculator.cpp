#include <iostream>
using namespace std;

int main()
{
	//Input first integer
	double numb1 = 0;
	cout << " Enter first number ";
	cin >> numb1;

	//Input second integer
	double numb2 = 0;
	cout << " Enter second number ";
	cin >> numb2;

	//Solve problem	
	cout << " Addition = " << (numb1 + numb2) << endl;
	cout << " Subtraction = " << (numb1 - numb2) << endl;
	cout << " Multiplication = " << (numb1 * numb2) << endl;
	cout << " Division = " << (numb1 / numb2) << endl; 
	//cout << " Remainder = " << (numb1 % numb2) << endl;

	return 0;
} 
