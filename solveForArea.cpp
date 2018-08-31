#include <iostream>
using namespace std;

int main()
{

	int radius = 0;
	//Request input to determine Area and Circumference of a circle
	cout << " Let's determine the Area and Circumference of a circle. " << endl;

	//Variable to store radius	
	cout << " Enter a radius: ";
	cin >> radius;

	//Calculate the area of a circle
	//A = Pi * r * r
	cout << " The Area of the circle = " << 3.14*radius*radius << endl;
	

	//Calculate the circumference of a circle
	//C = 2 * Pi * r
	cout << " The Circumference of the circle = " << 2*3.14*radius << endl;

	return 0;
}

//created 08292018
