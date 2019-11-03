#include <iostream>

using namespace std;

int is_prime(int i);

int main()
{
	int sum = 0;
	int n, i;
	cin >> n;
	if(n > 100 && n < 10000)
	{
		for(i = 100; i < n + 1; i++)
		{
			if(is_prime(i))
			{
				sum += i;
			}
		}
		cout << sum << endl;
	}
}

int is_prime(int i)
{
	for(int j = 2; j < i; j++)
	{
		if(i % j == 0)
			return 0;
	}
	return 1;
}