// 1051-插入排序
#include <iostream>
using namespace std;
int main()
{
    int num[100] = {0}, n, m, temp;
    while(cin >> n >> m)
    {
        if (!n && !m)
            break;
        for (int i = 0; i < n; i++)
            cin >> num[i];
        for (int i = 0; i < n; i++)
        {
            if (num[i] > m)
            {
                for (int j = n + 1; j > i; j--)
                    num[j] = num[j - 1];
                num[i] = m;
                break;
            }
            if (i == n - 1)
                num[n] = m;
        }
        for (int i = 0; i < n + 1; i++)
            cout << num[i] << ' ';
        cout << endl;
    }
    return 0;
}