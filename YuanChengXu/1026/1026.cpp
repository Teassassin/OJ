#include <iostream>
using namespace std;

int main()
{
    char chs[3], temp;
    while(cin >> chs[0] >> chs[1] >> chs[2])
    {
        if(chs[0] > chs[1]) temp = chs[0], chs[0] = chs[1], chs[1] = temp;
        if(chs[1] > chs[2]) temp = chs[1], chs[1] = chs[2], chs[2] = temp;
        if(chs[0] > chs[1]) temp = chs[0], chs[0] = chs[1], chs[1] = temp;
        for(int i = 0; i < 3; i++){
            cout << chs[i] << ' ';
        }
        cout << endl;
        cout << chs[0] << " " << chs[1] << " " << chs[2] << " " << endl;
    }
    return 0;
}