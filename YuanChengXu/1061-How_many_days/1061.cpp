// 1061-How many days?
#include <iostream>
using namespace std;

int main()
{
    int M, k;
    cin >> M >> k;
    while(M || k)
    {
        int days = 0;
        while (M--)
        {
            if (++days % k == 0)
                M++;
        }
        cout << days << endl;
        cin >> M >> k;
    }
    return 0;
}
