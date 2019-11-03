#include <iostream>

using namespace std;

int main()
{
    cout << 5e0.5 << endl;
    int n = 0, m;
    while(cin >> n >> m)
    {
        if(!n && !m)    break;
        int *nums = new int[n + 1];
        for(int i = 0; i < n; ++i)
            nums[i] = 2 * (i + 1);
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n - i - 1; ++j)
            {
                if(nums[j] > nums[j + 1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        for(int i = 0; i < n; ++i)
            cout << nums[i] << ' ';
        cout << endl;
        for(int i = 0; i < n; ++i)
        {
            if(m < nums[i])
            {
                for(int j = n; j > i; --j)
                {
                    nums[j] = nums[j - 1];
                }
                nums[i] = m;
            }
            else
                nums[n] = m;
        }
        for(int i = 0; i <= n; ++i)
            cout << nums[i] << ' ';
        cout << endl;
        delete [] nums;
    }
    return 0;
}
