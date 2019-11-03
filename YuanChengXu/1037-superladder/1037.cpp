/** 超级楼梯 */

#include <iostream>

using namespace std;

void superladder(int *M, int N);

int main()
{
    int N;
    cin >> N;
    int *M = new int[N];
    for(int i = 0; i < N; ++i)
        cin >> M[i];
    superladder(M, N);
    delete []M;
    return 0;
}

void superladder(int *M, int N)
{
    for(int i = 0; i < N; ++i)
    {
        if(M[i] <= 40 && M[i] >= 1)
        {
            int count = 1;
            for(int j = 1; j < M[i]; ++j)
            {
                if((M[i] - j) % 2 == 0)
                    count++;
            }
            cout << count << endl;
        }
    }
}
