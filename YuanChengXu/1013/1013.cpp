#include <iostream>

using namespace std;

int main()
{
    int n, counts;
    while(cin >> n)
    {
        counts = 0;
        if(n > 100 && n < 10000000)
        {
            for(int i = 100; i < n; i++)
                if(i % 2 == 0 && i % 3 == 0 && i % 7== 0)
                    counts++;
            cout << counts << endl;
        }
    }
    return 0;
}
