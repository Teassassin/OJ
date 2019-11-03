/** 数列增长 */

#include <iostream>

using namespace std;

int main()
{
    int a[3] = {1, 2, 3};
    int counter = 3;
    int n = 10;
    cin >> n;
    while(a[2] <= n)
    {
        int temp = a[2];
        a[2] = (a[0]+ a[1] + a[2]) / 2;
        a[0] = a[1];
        a[1] = temp;
        counter++;
    }
    cout << counter << endl;
    return 0;
}
