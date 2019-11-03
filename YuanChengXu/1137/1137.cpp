/** 分数段统计 */

#include <iostream>

using namespace std;

int main()
{
    const int N = 10;
    int a[N] = {};
    int counter[5] = {};
    for(int i = 0; i < N; i++)
        cin >> a[i];
    for(int i = 0; i < N; i++)
    {
        if(a[i] >= 90)
            counter[4]++;
        else if(a[i] >= 80 && a[i] <= 89)
            counter[3]++;
        else if(a[i] >= 70 && a[i] <= 79)
            counter[2]++;
        else if(a[i] >= 60 && a[i] <= 69)
            counter[1]++;
        else
            counter[0]++;

    }
    for(int i = 0; i < 5; i++)
        cout << counter[i] << " ";
    return 0;
}
