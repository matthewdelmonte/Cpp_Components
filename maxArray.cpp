#include <iostream>
using namespace std;

//prototype
int findHighest ( int[], int );

int main()
{
	//creating an array
	int a[] = {5, 2, 9, 84, 7};

	cout << "max integer in the array: " << findHighest( a, 5 ) << endl;

	return 0;
}

//definition
int findHighest ( int a[], int length )
{
	int high = a[0];

	for ( int i = 1; i < length; i++ )
		if (a[i] > high )
			high = a[i];

return high;

}
