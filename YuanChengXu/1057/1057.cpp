// 1057-求平均成绩
// AC-presentation error
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    double total, aveStu[50], aveSub[5];
    double arr[50][5];
    double sum = 0;                     // 临时存放总量
    int counts = 0;                     // 各科成绩大于等于平均成绩的学生数量
    bool flag = true;                   // 判断是否各科均大于等于平均成绩

    while(cin >> n >> m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];           // 录入学生成绩
                sum += arr[i][j];           // 顺便加上直接求每位学生的总成绩
            }
            aveStu[i] = sum / m;            // 求得平均成绩
            sum = 0;                        // sum 初始化
        }
        for (int i = 0; i < m; i++)         // 求各科平均成绩
        {
            for (int j = 0; j < n; j++)
                sum += arr[j][i];
            aveSub[i] = sum / n;            // 同上一循环
            sum = 0;
        }
        
        for (int i = 0; i < n; i++)         // 统计各科成绩均大于等于平均成绩的学生数量
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] < aveSub[j])
                {
                    flag = false;           // 有一门小于即置 flag 为 false
                    break;                  // 跳出内循环
                }
            }
            if (flag)
                counts++;
            flag = true;                    // 重置flag
        }
        
        for (int i = 0; i < n; i++)         // 输出
            printf("%.2lf ", aveStu[i]);
        printf("\n");
        for (int i = 0; i < m; i++)
            printf("%.2lf ", aveSub[i]);
        printf("\n");
        printf("%d\n", counts);
        counts = 0;
    }
    return 0;
}