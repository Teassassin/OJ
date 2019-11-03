#include <iostream>

using namespace std;

int main()
{
	int m, n, temp, counter = 0;
	cin >> m >> n;
	if(m > 1 && n > 1 && m < 10 && n < 10)
	{
		for(int i = 0; i < 101; i++)
		{
			for(int j = 0; j < 101; j++)
			{
				if(2 * i * m + 2 * j * n + (100 - i - j) == 200)
				{
					counter++;
				}
			}
		}
		if(counter)
			cout << counter << endl;
		else
			cout << "no solution" << endl;
	}
}