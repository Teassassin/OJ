// 1056-海选女猪脚
// 代码很冗余
// 重点是没有AC
// 2019/11/14
#include <iostream>
using namespace std;
int main()
{
    int m, n, x, y, s;
    int MM[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> MM[i][j];
            if (!i && !j)               // 初始化极值为第一个MM的下标
            {
                x = i;
                y = j;
                s = MM[i][j];
                if (s < 0)
                    s *= -1;
                continue;
            }
            int temp = MM[i][j];        // temp记录正值，同s，方便比较，不改变原数组值
            if (temp < 0)
                temp *= -1;
            if (s < temp)
            {
                x = i;                  // 记录极值下标
                y = j;
                s = temp;               // s记录正值
            }
        }
    }
    cout << x + 1 << " " << y + 1 << " " << MM[x][y] << endl; 
    return 0;
}