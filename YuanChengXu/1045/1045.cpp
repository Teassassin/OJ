// 1045-因子和
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << sum - 1 << endl;
    return 0;
}