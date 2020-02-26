// 1066-矩阵转置
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int matrix[10][10], matrix_invert[10][10];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix_invert[i][j] = matrix[j][i];
            if (j == m - 1)
                cout << matrix_invert[i][j];
            else
                cout << matrix_invert[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}