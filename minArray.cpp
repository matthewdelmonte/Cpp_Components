#include <iostream>
using namespace std;

//prototype
int findLowest ( int[], int );

int main()
{
	//creating an array
	int a[] = {5, 2, 9, 84, 7};

	cout << "min integer in the array: " << findLowest( a, 5 ) << endl;

	return 0;
}

//definition
int findLowest ( int a[], int length )
{
	int low = a[0];

	for ( int i = 1; i < length; i++ )
		if (a[i] < low )
			low = a[i];

return low;

}
