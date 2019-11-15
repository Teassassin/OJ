// 1054-下三角矩阵和
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    int matrix[10][10];
    cin >> n;
    for (int i = 0; i < n; i++)     // 输入矩阵元素
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)     // 求和
    {
        for (int j = 0; j <= i; j++) // 下三角
        {
            sum += matrix[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}