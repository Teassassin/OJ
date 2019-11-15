#include <iostream>
using namespace std;
int average;
int themin;
int tofind()
{
    int themax, x, i, n;
    int sum = 0;
    cin >> n;
    cin >> x;
    themax = x;
    themin = x;
    sum = x;
    for (i = 1; i < n; i++)
    {
        cin >> x;
        if (x > themax)
            themax = x;
        if (x < themin)
            themin = x;
        sum += x;
    }
    average = sum / n;
    return themax;
}
int main()
{
    int maxnumber;
    maxnumber = tofind();
    cout << maxnumber << " " << themin << " " << average << endl;
    return 0;
}