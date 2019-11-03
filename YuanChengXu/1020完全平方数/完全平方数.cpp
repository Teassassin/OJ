#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, i, counter = 0;
	int a, b;
	cin >> n;
	if(n < 1000000)
	{
		for(i = 0; i <= n; i++)
		{
			a = sqrt(double(i + 100)) == int(sqrt(double(i + 100)));
			b = sqrt(double(i + 268)) == int(sqrt(double(i + 268)));
			if(a && b)
			{
				counter++;
			}
		}
	}
	cout << counter << endl;
}