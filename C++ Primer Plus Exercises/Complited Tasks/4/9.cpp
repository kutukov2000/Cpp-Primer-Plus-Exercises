//4.9 Do Programming Exercise 6, but instead of declaring an array of three CandyBar
//structures, use new to allocate the array dynamically

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
	CandyBar* snacks = new CandyBar[5];
	snacks[0] = { "Mocha 1", 2.3,320 };
	snacks[1] = { "Mocha 2", 2.4,330 };
	snacks[2] = { "Mocha 3", 2.5,350 };
	snacks[3] = { "Mocha 4", 2.6,360 };
	snacks[4] = { "Mocha 5", 2.7,370 };

	for (int i = 0; i < 5; i++)
	{
		cout << snacks[i].brandName << " " << snacks[i].weight << " ounces " << snacks[i].numberOfCalories << " kcal\n";
	}

	delete[]snacks;

	return 0;
}