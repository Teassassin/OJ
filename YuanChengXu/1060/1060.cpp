// 1060-简单加密解密程序
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str_ori[80], str_enc[80], str_dec[80];
    cin >> str_ori;
    for (int i = 0; i < strlen(str_ori) + 1; i++)
    {
        if (str_ori[i] <= 'z' && str_ori[i] >= 'a')
            str_enc[i] = (str_ori[i] - 'a' + 2) % 26 + 'a';
        if (str_ori[i] <= 'Z' && str_ori[i] >= 'A')
            str_enc[i] = (str_ori[i] - 'A' + 2) % 26 + 'A';
    }
    str_enc[strlen(str_ori)] = '\0';
    for (int i = 0; i < strlen(str_enc) + 1; i++)
    {
        if (str_enc[i] <= 'z' && str_enc[i] >= 'a')
            str_dec[i] = (str_enc[i] - 'a' + 24) % 26 + 'a';
        if (str_enc[i] <= 'Z' && str_enc[i] >= 'A')
            str_dec[i] = (str_enc[i] - 'A' + 24) % 26 + 'A';
    }
    str_dec[strlen(str_enc)] = '\0';
    cout << str_enc << endl;
    cout << str_dec << endl;
    return 0;
}