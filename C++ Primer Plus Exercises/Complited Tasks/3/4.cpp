//3.4 Write a program that asks the user to enter the number of seconds as an integer
//value(use type long, or , if available, long long) and that then displays the equivalent time in days, hours, minutes, and seconds.Use symbolic constants to represent
//the number of hours in the day, the number of minutes in an hour, and the number
//of seconds in a minute.The output should look like this:
//Enter the number of seconds : 31600000
//31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
#include <iostream>
using namespace std;

int main()
{
	const int secondsInMinute = 60;
	const int minutesInHour = 60;
	const int hoursInDay = 24;

	long long seconds, copySeconds;

	cout << "Enter the number of seconds: ";
	cin >> seconds;
	copySeconds = seconds;

	int days = seconds / (secondsInMinute * minutesInHour * hoursInDay);
	seconds -= days * (secondsInMinute * minutesInHour * hoursInDay);

	int hours = seconds / (secondsInMinute * minutesInHour);
	seconds -= hours * (secondsInMinute * minutesInHour);

	int minutes = seconds / secondsInMinute;
	seconds -= minutes * secondsInMinute;

	cout << copySeconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";

	return 0;
}