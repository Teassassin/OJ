#include <iostream>

using namespace std;

int main()
{
    int m, n, counts;
    while(cin >> m && cin >> n)
    {
        if(m > 0 && n < 10)
        {
            counts = 0;
            for(int i = 0; i <= 100; i++)
                for(int j = 0; j <= 100; j++)
                    if ((2 * (m * i + n * j) + 100 - i - j) == 200)
                        counts++;
            if(!counts)
                cout << "no solution" << endl;
            else
                cout << counts << endl;
        }
    }
    return 0;
}
