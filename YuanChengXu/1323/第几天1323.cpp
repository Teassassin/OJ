#include <iostream>

using namespace std;

bool the_year(int y) { return (y % 100 != 0 && y % 4 == 0 || y % 400 == 0); }

int main()
{
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int y, m, n, sum = 0;
	cin >> y >> m >> n;
	if(the_year(y))
		days[1]++;
	for(int i = 0; i < m - 1; ++i)
	{
		sum += days[i];
	}
	sum += n;
	cout << sum << endl;
}