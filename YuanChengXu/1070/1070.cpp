// 1070-A|B?
#include <iostream>
using namespace std;

int main()
{
    int A, B;
    while (cin >> A >> B)
    {
        if (A % B)
            cout << "NO" << endl;
        else
            cout << "YES" << endl; 
    }
    return 0;
}