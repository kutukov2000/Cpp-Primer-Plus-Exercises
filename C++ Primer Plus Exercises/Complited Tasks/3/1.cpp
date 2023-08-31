//3.1 Write a short program that asks for your height in integer inches and then converts your height to feet and inches. Also use a const symbolic constant to represent the conversion factor.
#include <iostream>
using namespace std;

int main()
{
	const int inchesPerFeet = 12;

	int heightInInches;
	cout << "Enter your height (inches): ";
	cin >> heightInInches;

	int heightInFeet = heightInInches / inchesPerFeet;
	int remainingInches = heightInInches % inchesPerFeet;

	cout << heightInInches << " inches = " << heightInFeet << " feets and " << remainingInches << " inches";


	return 0;
}