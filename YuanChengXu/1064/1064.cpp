// 1064-字符串中删除字符问题
#include <iostream>
using namespace std;
int main()
{    
        char s[80];
        char temp, s1[80];
        int i,j = 0;
        cin >> s >> temp;
        for(int i = 0; i < 80; i++)
        {
            if(s[i] != temp)
            {
                s1[j++] = s[i];
            }
        }
        cout << s1 << endl;
        return 0;
}