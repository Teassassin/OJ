#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    if(n % 2 == 0 && n > 1000 && n < 10000)
    {
        sum = n;
        for(int i = 0; i < 9; i++)
        {
            n /= 2;
            sum += n * 2;
        }
        cout << sum << endl;
    }
    return 0;
}
