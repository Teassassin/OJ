// 数列问题2
#include <iostream>

using namespace std;

int main()
{
	int pre1 = 1, pre2 = 2;
	int ans;
	for (int i = 0; i < 20; i++)
	{
		if (i == 0 || i == 1)
		{
			continue;
		}
		else
		{
			ans = (pre1 + pre2) * 2;
			pre1 = pre2;
			pre2 = ans;
		}
	}
	cout << ans << endl;
	return 0;
}