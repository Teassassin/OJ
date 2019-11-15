// 1049-残缺程序（5）
#include <iostream>
using namespace std;
#define LIMIT 100000000

int factorial()
{
    static int fact = 1;
    static int times = 1;
    fact *= times;
    times++;
    if (fact < 100000000)
        return 1;
    else
    {
        cout << fact << " " << times - 1 << endl;
        return 0;
    }
}
int main()
{
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        if (!factorial())
            break;
    }
    return 0;
}