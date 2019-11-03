#include <iostream>

using namespace std;

int main()
{
	int n, m, sum = 0;
	cin >> m;
	for(n = 0;;)
	{
		n++;
		sum += n;
		if(sum > m)
			break;
	}
	cout << n - 1 << endl;
	return 0;
}