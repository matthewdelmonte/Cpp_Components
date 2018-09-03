#include <iostream>
using namespace std;

int main()
{
	//Find the area of a Triangle
	
	//The Area of a Triangle is 1/2 Base length * Height
	cout << " Solve for Area of a Triangle. " << endl;

	//Input the length of the base
	int base = 0;
	cout << " What is the base length of the Triangle? ";
	cin >> base;

	//Input the height of the Triangle
	int height = 0;
	cout << " What is the height of the Triangle? ";
	cin >> height;

	//Calculate the Area of the Triangle
	cout << " The Area of the Triangle = " << base / 2 * height << endl;

	return 0;
}
