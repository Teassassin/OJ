#include <iostream>

using namespace std;

int main()
{
	int n, i, sum = 0;
	cin >> n;
	if(n < 100)
	{
		for(i = 1; i < n + 1; i++)
		{
			if(i % 2 != 0)
			{
				sum += i * (i + 1) * (i + 2);
			}
		}
		cout << sum << endl;
	}
}