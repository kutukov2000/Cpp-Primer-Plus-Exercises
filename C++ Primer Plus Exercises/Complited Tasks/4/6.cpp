//4.6 The CandyBar structure contains three members, as described in Programming
//Exercise 5.Write a program that creates an array of three CandyBar structures, 
//initializes them to values of your choice, and then displays the contents of each structure

#include <iostream>
using namespace std;

struct CandyBar
{
	string brandName;
	float weight;
	unsigned int numberOfCalories;
};

int main()
{
	CandyBar snacks[5];
	snacks[0]={ "Mocha 1", 2.3,320 };
	snacks[1]={ "Mocha 2", 2.4,330 };
	snacks[2]={ "Mocha 3", 2.5,350 };
	snacks[3]={ "Mocha 4", 2.6,360 };
	snacks[4]={ "Mocha 5", 2.7,370 };

	for (int i = 0; i < 5; i++)
	{
		cout << snacks[i].brandName << " " << snacks[i].weight << " ounces " << snacks[i].numberOfCalories << " kcal\n";
	}
	
	return 0;
}