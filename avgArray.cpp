#include <iostream>
using namespace std;

int size;
int sum;

//prototype
double findAverage ( double[], int );

int main()
{
	double a[] = {5, 2, 9, 84, 7};

	cout << "average of integers in array: " << findAverage( a, 5 ) << endl;

	return 0;
}

//definition
double findAverage ( double a[], int size )
{
	double average = 0.00;

	for ( int i = 0; i < size; i++ )
	{
		sum += a[i];
	}
average = ((double)sum) / size;

return average;

}
