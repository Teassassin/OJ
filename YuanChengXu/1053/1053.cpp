// 1053-数据的交换输出
#include <iostream>
using namespace std;
int main()
{
    int num[100];
    int n, min = 0;
    cin >> n;
    while(n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            if (num[min] > num[i])
                min = i;
        }
        int temp = num[min];
        num[min] = num[0];
        num[0] = temp;
        for (int i = 0; i < n; i++)
            cout << num[i] << ' ';
        cout << endl;
        cin >> n;
    }
    return 0;
}