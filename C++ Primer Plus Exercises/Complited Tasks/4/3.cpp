//4.3 Write a program that asks the user to enter his or her first name and then last
//name, and that then constructs, stores, and displays a third string, consisting of the
//user’s last name followed by a comma, a space, and first name.Use char arrays and
//functions from the cstring header file.A sample run could look like this:
//Enter your first name : Flip
//Enter your last name : Fleming
//Here’s the information in a single string : Fleming, Flip

#include <iostream>
using namespace std;

int main()
{
	char firstName[50];
	char lastName[50];
	char fullName[100];

	cout << "Enter your first name: ";
	cin.getline(firstName, 50);

	cout << "Enter your last name: ";
	cin.getline(lastName, 50);

	strcpy_s(fullName, lastName);
	strcat_s(fullName, ", ");
	strcat_s(fullName, firstName);

	cout << "Here’s the information in a single string: " << fullName;

	return 0;
}