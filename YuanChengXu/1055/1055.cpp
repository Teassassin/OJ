#include <iostream>
#include <queue>

using namespace std;

int Joseph(int n, int m);

int main()
{
    int n, m;
    while (cin >> n >> m)
        cout << Joseph(n, m) << endl;
    return 0;
}

int Joseph(int n, int m)
{
    int cur = 1;                        // 记录当前数到谁了
    queue<int> Q;                       // 新建队列
    for (int i = 1; i <= n; i++)
        Q.push(i);                      // 初始化队列
    while (Q.size() > 1)                // 剩一个人结束循环
    {
        if (cur == m)                   // 数到了，删除，cur复原
        {
            Q.pop();
            cur = 1;
        }
        else                            // 否则，把队首移到队尾，删除队首，cur++
        {
            Q.push(Q.front());
            Q.pop();
            cur++;
        }
    }
    return Q.front();                   // 返回最后剩下的人
}