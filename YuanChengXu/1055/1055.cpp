#include <iostream>

using namespace std;

int Joseph(int n, int m);
int main()
{
    int n, m;
    while(cin >> n >> m)
        cout << Joseph(n, m) << endl;
}

int Joseph(int n, int m)
{
    if(!(1<=n && m<=1000000))
        return 0;
    int a[n];
    for(int i = 1; i <= n; i++)
        a[i - 1] = i;
    int count = 0, left = 10;
    for(int i = 0; i <= n; i++)
    {
        if(left != 1)
        {
            if(i == n)
                i = 0;
            if(++count == m)
            {
                count = 0;
                a[i] = 0;
                left--;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i])
            return a[i];
    }
}