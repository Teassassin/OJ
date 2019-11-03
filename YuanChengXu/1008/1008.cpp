#include <iostream>

using namespace std;

int main()
{
	int m, n, sum, temp;
	cin >> m >> n;
	if(m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	sum = (n - m + 1) * (n + m) / 2;
	cout << sum << endl;
	return 0;
}