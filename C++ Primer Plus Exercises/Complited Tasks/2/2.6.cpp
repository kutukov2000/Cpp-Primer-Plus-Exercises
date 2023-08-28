//2.6 Write a program that has main() call a user-defined function that takes a distance in light years as an argument and then returns the distance in astronomical units.
#include <iostream>

float LightYearsToAstronomicalUnits(float lightYears)
{
	float astronomicalUnits = lightYears * 63239.7263;

	return astronomicalUnits;
}

int main()
{
	using namespace std;

	float lightYears;
	cout << "Enter the number of light years:: ";
	cin >> lightYears;

	float astronomicalUnits = LightYearsToAstronomicalUnits(lightYears);

	cout << lightYears << " light years = " << astronomicalUnits << " astronomical units";

	return 0;
}