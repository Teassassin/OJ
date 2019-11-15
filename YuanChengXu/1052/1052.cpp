// 1052-字符串比较
#include <iostream>
using namespace std;
int main()
{
    char str1[80], str2[80];
    cin >> str1 >> str2;
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            int temp = str1[i] - str2[i];
            cout << (temp > 0 ? temp : temp * -1) << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}