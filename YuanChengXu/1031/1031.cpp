#include <iostream>
using namespace std;
int main()
{
    int P = 0, N = 0, tmp = 0;
    do{
        cin >> tmp;
        if(tmp < 0)
            N++;
        else if(tmp > 0)
            P++;
    }while(tmp);
    cout << P << ' ' << N << endl;
    return 0;
}