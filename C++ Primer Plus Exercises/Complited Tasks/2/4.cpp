//2.4 Write a program that asks the user to enter his or her age.The program then should display the age in months
#include <iostream>

int main()
{
	using namespace std;

	int age;
	cout << "Enter your age: ";
	cin >> age;

	int months = age * 12;
	cout << "Your age in months is " << months;

	return 0;
}