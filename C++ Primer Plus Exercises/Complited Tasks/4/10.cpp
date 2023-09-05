//4.10 Write a program that requests the user to enter three times for the 40-yd dash (or
//40 - meter, if you prefer) and then displays the times and the average.Use an array
//object to hold the data. (Use a built - in array if array is not available.)

#include <iostream>
using namespace std;

int main()
{
	float times[3];

	cout << "Enter first time: ";
	cin >> times[0];
	cout << "Enter second time: ";
	cin >> times[1];
	cout << "Enter third time: ";
	cin >> times[2];

	cout << "Times: " << times[0] << " " << times[1] << " " << times[2] << endl;
	cout << "Averadge time: " << (times[0] + times[1] + times[2]) / 3;

	return 0;
}