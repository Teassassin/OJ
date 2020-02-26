// 1065-进制转换
// 第一次尝试，简单的问题复杂化，用栈存储，再倒序输出
// AC失败
// 看了答案，用的递归，clever!
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N, R;
    stack<char> Rs;
    char R_Array[1000] = "";
    while (cin >> N >> R)
    {
        int n = N;                      // 要转换的十进制数
        char m;                         // 保存要进栈的字符
        bool flag = true;               // 正数true，负数false
        if (n < 0)
        {
            flag = false;
            n = -n;
        }
        while (m = n % R)
        {
            if (m >= 10)
                m += 55;
            else
                m += 48;
            Rs.push(m);
            n /= R;
        }
        char *p = R_Array;
        while (!Rs.empty())
        {
            *p++ = Rs.top();
            Rs.pop();
        }
        if (flag)
            cout << R_Array << endl;
        else
            cout << '-' << R_Array << endl;
        for (p = R_Array; p < R_Array + 1000; p++)
            *p = '\0';
    }
    return 0;
}