// 4.1 Write a C++ program that requests and displays information as shown in the following example of output :
//What is your first name ? Betty Sue
//What is your last name ? Yewe
//What letter grade do you deserve ? B
//What is your age ? 22
//Name : Yewe, Betty Sue
//Grade : C
//Age : 22
#include <iostream>
#include<string>
using namespace std;

struct Student
{
	string firstName; 
	string lastName;
	char grade;
	unsigned short age;
};

int main()
{
	Student student;

	cout << "What is your first name ? ";
	getline(cin, student.firstName);

	cout << "What is your last name ? ";
	getline(cin, student.lastName);

	cout << "What letter grade do you deserve ? ";
	(cin >> student.grade).get();

	cout << "What is your age ? ";
	cin >> student.age;

	cout << "Name: " << student.lastName + " " + student.firstName << endl;
	cout << "Grade: " << student.grade << endl;
	cout << "Age: " << student.age << endl;

	return 0;
}