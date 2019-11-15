// 1050-残缺程序（6）
#include <iostream>
using namespace std;
double b1, c1;
double k1, k2, k3, k4;
double Func(int), Funb(int);
int main()
{
    int n;
    double B, C;
    cin >> n;
    cin >> k1 >> k2 >> k3 >> k4;
    cin >> b1 >> c1;
    B = Funb(n);
    C = Func(n);
    cout << "B=" << B << " "
         << "C=" << C << endl;
    return 0;
}
double Func(int n)
{
    double c;
    if (n == 1)
    {
        c = c1;
        cout << "c=" << c << endl;
    }
    else
    {
        c = Func(n - 1) * (1 + k1 - k2 * Funb(n - 1));
    }
    return c;
}
double Funb(int n)
{
    double b;
    if (n == 1)
    {
        b = b1;
    }
    else
    {
        b = Funb(n - 1) * (1 - k3 + k4 * Func(n - 1));
    }
    return b;
}