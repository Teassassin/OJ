// 1037-超级楼梯
#include <iostream>
using namespace std;

int SupperLadder(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return SupperLadder(n - 1) + SupperLadder(n - 2);
}

int main()
{
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> M;
        cout << SupperLadder(M) << endl;
    }
    return 0;
}

/* Wrong Answer */
/*
int main()
{
    int M;
    while(cin >> M)
    {
        if(M % 2 == 0)
            cout << M / 2 << endl;
        else
            cout << M / 2 + 1 << endl;
    }
    return 0;
}
*/