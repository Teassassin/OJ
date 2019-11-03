#include <iostream>

using namespace std;

int is_prime(int);

int main()
{
	int m, n, temp, counter = 0;
	cin >> m >> n;
	if(m > 1 && n > 1 && m < 1000000 && n < 1000000)
	{
		if(n < m)
		{
			temp = m;
			m = n;
			n = temp;
		}
		for(int i = m; i < n + 1; i++)
		{
			if(is_prime(i))	
            {counter++; break;}
		}
		cout << counter << endl;
	}
}

int is_prime(int i)
{
	for(int j = 2; j < i; j++)
	{
		if(i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}