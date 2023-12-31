//4.7 William Wingate runs a pizza-analysis service. For each pizza, he needs to record
//the following information :
//n The name of the pizza company, which can consist of more than one word
//n The diameter of the pizza
//n The weight of the pizza
//Devise a structure that can hold this information and write a program that uses a
//structure variable of that type.The program should ask the user to enter each of the
//preceding items of information, and then the program should display that information.Use cin(or its methods) and cout.

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
	Pizza pizza;

	cout << "Enter name of the pizza company: ";
	getline(cin, pizza.companyName);

	cout << "Enter diameter of the pizza: ";
	cin >> pizza.diameter;

	cout << "Enter weight of the pizza: ";
	cin >> pizza.weight;

	cout << pizza.companyName << " " << pizza.diameter << "cm " << pizza.weight << "g";
	
	return 0;
}