//2.3 Write a C++ program that uses three user-defined functions (counting main() as one) and produces the following output :
//Three blind mice
//Three blind mice
//See how they run
//See how they run
#include <iostream>
using namespace std;

void ThreeBlindMice() {
	cout << "Three blind mice" << endl;
}
void SeeHowTheyRun() {
	cout << "See how they run" << endl;
}

int main()
{
	ThreeBlindMice();
	ThreeBlindMice();
	SeeHowTheyRun();
	SeeHowTheyRun();
}