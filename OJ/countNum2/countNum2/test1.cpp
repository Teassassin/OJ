// 计数问题2
#include <iostream>

using namespace std;

int main() {
    int m, counts = 0;
    cin >> m;
    for (int i = 100; i <= m; i++)
    {
        if (i % 2 == 0 && i % 17 == 0) {
            counts++;
        }
    }
    cout << counts << endl;
    return 0;
}