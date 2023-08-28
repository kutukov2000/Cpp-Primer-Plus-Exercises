//2.5 Write a program that has main() call a user-defined function that takes a Celsius temperature value as an argument and then returns the equivalent Fahrenheit value
#include <iostream>

float CelsiusToFahrenheit(float celsius) 
{
	float fahrenheit = 1.8 * celsius + 32;

	return fahrenheit;
}

int main()
{
	using namespace std;

	float celsius;
	cout << "Enter a Celsius value: ";
	cin >> celsius;

	float fahrenheit = CelsiusToFahrenheit(celsius);

	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit";

	return 0;
}