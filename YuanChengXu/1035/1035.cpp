#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    if(n > 1 && n < 1000)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                sum += j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
