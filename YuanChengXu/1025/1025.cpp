#include<iostream>
using namespace std;
void func(int n)
{
    if(n > 2)
        func(n - 2);
    else
        cout << n << " ";
}
int main()
{
    func(10);
    return 0;
}
