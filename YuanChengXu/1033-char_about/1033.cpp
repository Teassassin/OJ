#include <iostream>
#include <windows.h>

using namespace std;

void transform(char ch);

int main()
{
    char chs[4];
    for(int i = 0; i < 4; ++i)
        cin >> chs[i];
    for(int i = 0; i < 4; ++i)
        transform(chs[i]);
}

void transform(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        cout << (char)(ch + ' ') << endl;
    else if(ch >= 'a' && ch <= 'z')
        cout << (char)(ch - ' ') << endl;
    else if(ch >= '1' && ch <= '9')
        cout << ch << endl;
    else
        cout << "other" << endl;
}