// 1059-排序输出
// AC-Presentation Error 对着答案写的，然而还是没找到原因
// 2019/11/17
#include <iostream>
using namespace std;
int main()
{
    int n, num[100], sum = 0;
    double ave;

    cin >> n;
    for (int i = 0; i < n; i++)                 // 输入数据
    {
        cin >> num[i];
        sum += num[i];                          // 求和
    }

    ave = sum / n;                              // 求平均值

    for (int i = 0; i < n - 1; i++)             // 冒泡
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (num[j] > num[j + 1])       
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    
    // bool flag = true;                        // 只换行一次
    // for (int i = 0; i < n; i++)              // 输出（费了好大心思）然而Presentation Error
    // {                                           
    //     if (num[i] > ave && flag && i != n)
    //     {
    //         cout << num[i - 1] << endl;
    //         flag = false;
    //     }
    //     else if (i == n)
    //         cout << num[i - 1] << endl;
    //     else
    //         cout << num[i - 1] << ' ';
    // }
    for (int i = 0; i < n; i++)                 // 没想到答案这么简单，但是行尾没有去掉空格
    {
        if (num[i] < ave)
            cout << num[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (num[i] >= ave)
            cout << num[i] << ' ';
    }

    return 0;
}