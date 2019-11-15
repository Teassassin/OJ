// 1048-核反应堆
#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, b = 0;
    cin >> n;
    for (int t = 1; t <= n; t++)
    {
        int temp = b;
        b = 3 * a + 2 * b;
        a = temp;
    }
    cout << a << ' ' << b << endl;
    return 0;
}