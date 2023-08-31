//3.6 Write a program that asks how many miles you have driven and how many gallons
//of gasoline you have used and then reports the miles per gallon your car has gotten.
//Or, if you prefer, the program can request distance in kilometers and petrol in liters
//and then report the result European style, in liters per 100 kilometers.
#include <iostream>
using namespace std;

int main()
{
	float km, liters;

	cout << "Enter distance (km): ";
	cin >> km;

	cout << "Enter liters of gasoline: ";
	cin >> liters;

	float result = 100 / (km / liters);

	cout << "Result: " << result << " liters/100km";
	return 0;
}