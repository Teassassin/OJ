#include <iostream>

using namespace std;

int main()
{
	int m, n, temp;
	cin >> m >> n;
	if(m < 100000000 && n < 100000000)
	{
		if(n > m)
		{
			temp = m;
			m = n;
			n = temp;
		}
		for(int i = m; ; i++)
		{
			if(i % m == 0 && i % n == 0)
			{
				cout << i << endl;
				break;
			}
		}
	}
} 