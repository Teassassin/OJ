// 1058-绝对值排序
// AC-Presentation Error 注意输出格式
// 边输入边排序
// 发现还不如最后排序效率高
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, num[100];
    while(cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];                              // 输入数据
            for (int j = 0; j < i; j++)                 // 与已输入数据进行比较
            {
                if (abs(num[i]) > abs(num[j]))          // 根据比较插入数据
                {
                    int temp = num[i];
                    for (int k = i; k > j; k--)         // 各元素后移
                        num[k] = num[k - 1];
                    num[j] = temp;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)                     // 注意输出格式
        {
            if (i == n - 1)
                cout << num[i] << endl;
            else
                cout << num[i] << ' ';
        }
    }
    return 0;
}