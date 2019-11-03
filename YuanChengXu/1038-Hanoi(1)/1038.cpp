/** 汉诺塔问题（1） */

#include <iostream>

using namespace std;

void hanoi(int n);

int total_num = 0, exit_num = 0;

int main()
{
    int n = 0;
    if(n <= 64)
    {
        cin >> n;
        hanoi(n);
        cout << total_num << " " << exit_num << endl;
    }

    return 0;
}

void hanoi(int n)
{
    total_num++;
    if(n == 1)
        exit_num++;
    else
    {
        hanoi(n - 1);   // 将second盘A->B
        // move(A, C)   // 将first盘 A->C, 这只是过程， 我们可以不写
        hanoi(n - 1);   // 将second盘B->C
    }
}
