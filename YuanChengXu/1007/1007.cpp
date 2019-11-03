#include <iostream>

using namespace std;

int main()
{
	int day;
	cin >> day;
	day += 100 % 7;
	if(day > 6) day -= 7;
	cout << day << endl;
}