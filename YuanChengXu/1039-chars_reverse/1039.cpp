/** 反序输出 */

#include <iostream>

using namespace std;

void Reverse(char *str, int n, int size_str);

int main()
{
    int n;
    cin >> n;
    char *str = new char[n + 1];
    cin >> str;
    /**
     * 从这可以看出
     * if(str[n] == '\0')
     * 虽然未分配足够的空间给它'\0'，但是它会在最后自动补充'\0'
     * 这就意味着越界了
     */
    /**
     * 用下面这句语句，输入比n短的字符串时，发现越界的n下标并没有变成'\0'
     * 所以我们最好用new char[n + 1]
     * if(str[n-1] == '\0' && str[n] == '\0')
     *     cout << "自动补充\0" << endl;
     */
    str[n] = '\0';
    int size_str = n;
    Reverse(str, n - 1, size_str);
    cout << str << endl;
    return 0;
}

void Reverse(char *str, int n, int size_str)
{
    if(n < size_str / 2)
        return;
    int len = size_str - n - 1;
    char temp;
    temp = str[n];
    str[n] = str[len];
    str[len] = temp;
    Reverse(str, n - 1, size_str);
}
