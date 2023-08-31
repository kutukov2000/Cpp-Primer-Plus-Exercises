//3.2 Write a short program that asks for your height in feet and inches and your weight
//in pounds. (Use three variables to store the information.) Have the program report
//your body mass index(BMI).To calculate the BMI, first convert your height in feet
//and inches to your height in inches(1 foot = 12 inches).Then convert your height
//in inches to your height in meters by multiplying by 0.0254.Then convert your
//weight in pounds into your mass in kilograms by dividing by 2.2.Finally, compute
//your BMI by dividing your mass in kilograms by the square of your height in
//meters.Use symbolic constants to represent the various conversion factors.
#include <iostream>
using namespace std;

int main()
{
	const int inchesPerFeet = 12;
	const float metersPerInch = 0.0254;
	const float poundsPerKg = 2.2;

	int heightFeets, heightInches;
	cout << "Enter your height in feets and inches" << endl;
	cout << "Enter feets: ";
	cin >> heightFeets;
	cout << "Enter inches: ";
	cin >> heightInches;

	int weightInPounds;
	cout << "Enter your weight (pounds): ";
	cin >> weightInPounds;

	int heightInInches = heightFeets * inchesPerFeet + heightInches;

	double heightInMeters = heightInInches * metersPerInch;

	double weightInKg = weightInPounds / poundsPerKg;

	double BMI = weightInKg / pow(heightInMeters, 2);	

	cout << "\nYour BMI = " << BMI;

	return 0;
}