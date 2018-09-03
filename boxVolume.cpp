#include <iostream>
using namespace std;

int main()
{
	//Request dimensions to determine the volume of a box
	cout << " Let's determine the Volume of your box. " << endl;

	//Variable to store the Height
	int Height = 0;
	cout << " What is the Height in inches; of the box, from floor to top? ";
	cin >> Height;

	//Variable to store the Width
	int Width = 0;
	cout << " What is the Width in inches; of the box? ";
	cin >> Width;

	//Variable to store the Length
	int Length = 0;
	cout << " What is the Length in inches; of the box? ";
	cin >> Length;

	//Calculate the Volume of the box
	// V = H x W x L
	cout << " The volume of the box = " << Height*Width*Length << " cubic inches." <<endl;
	
	return 0;	

}
