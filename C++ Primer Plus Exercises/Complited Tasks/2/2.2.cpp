//2.2 Write a C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)
#include <iostream>

int furlongsToYards(int furlongs) {
    int yards = furlongs * 220;
    return yards;
}

int main()
{
    using namespace std;

    int furlongs;
    cout << "Enter distance in furlongs: ";
    cin >> furlongs;
    
    int yards = furlongsToYards(furlongs);

    cout << furlongs << " furlongs = " << yards << " yards";
}