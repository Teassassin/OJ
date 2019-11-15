// 1047-数列求和
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    float i = 1, item, sum = 0, flag = 1;
    cin >> n;
    do
    {
        item = 1.0 / (i * (i + 1) + n);
        sum += flag * item;
        i++;
        flag *= -1;
    }while(item >= 0.0001);
    printf("%.4f", sum - item + 0.00005);
    return 0;
}