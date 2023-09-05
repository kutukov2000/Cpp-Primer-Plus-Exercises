//4.8 Do Programming Exercise 7 but use new to allocate a structure instead of declaring
//a structure variable.Also have the program request the pizza diameter before it
//requests the pizza company name.

#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
	string companyName;
	float diameter;
	float weight;
};

int main()
{
	Pizza* pizza=new Pizza;

	cout << "Enter diameter of the pizza: ";
	cin >> pizza->diameter;

	cout << "Enter weight of the pizza: ";
	cin >> pizza->weight;

	cin.ignore();
	cout << "Enter name of the pizza company: ";
	getline(cin, pizza->companyName);

	cout << pizza->companyName << " " << pizza->diameter << "cm " << pizza->weight << "g";
	
    delete pizza;

	return 0;
}