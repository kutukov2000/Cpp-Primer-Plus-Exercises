//2.7 Write a program that asks the user to enter an hour value and a minute value.The main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run :
//Time: 9:28
#include <iostream>
	using namespace std;

void ShowTime(int hours, int minutes) 
{
	cout << "Time: " << hours << ":" << minutes;
}

int main()
{

	int hours, minutes;

	cout << "Enter hours: ";
	cin >> hours;

	cout << "Enter minutes: ";
	cin >> minutes;

	ShowTime(hours, minutes);

	return 0;
}