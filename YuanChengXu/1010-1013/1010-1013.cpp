#include <iostream>

using namespace std;

int main()
{
	int counter = 0;
	int n[3] = {0,0,0}, i = 3, j = 3;
	while(i--)
	{
		cin >> n[i];
		while(!(n[i] > 100 && n[i] < 10000000))
		{
			cin >> n[i];
		}
	}
	while(j--)
	{
		i = 100;
		counter = 0;
		while(i < n[j])
		{
			i++;
			if((i % 2 == 0) && (i % 3 == 0) && (i % 7 == 0))
			{
				counter++;
			}
		}
		cout << counter << endl;
	}
	/* [1013]
	int j = 3;
	while(j--)
	{
		int n, m, i = 100,counter = 0;
		cin >> n >> m;
		if(n > 100 && n < 10000000 && m > 100 && m < 10000000)
		{
			while(i < n)
			{
				i++;
				if((i % 2 == 0) && (i % 3 == 0) && (i % 7 == 0))
				{
					counter++;
				}
			}
			cout << counter << endl;
		}
	}
	/* [1012]
	int n, sum = 0;
	cin >> n;
	if(n < 1000)
	{
		for(int i = 1; i <= n; i++)
		{
			sum += i * (i + 1);
		}
		cout << sum << endl;
	}
	/* [1011]
	int a, b, c;
	cin >> a >> b;
	c = (a / 10 * 100) + (a % 10) + (b / 10 * 10) + (b % 10 * 1000);
	cout << c << endl;
	/* [1010]
	int a;
	cin >> a;
	if(a&1)
		cout << 'o' << endl;
	else
		cout << 'e' << endl;
	*/
	return 0;
}
