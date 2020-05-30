// ÇóºÍ
#include <iostream>

using namespace std;

int main() {
	int a, n, sum = 0;
	cin >> a >> n;
	int temp = a;
	for (int i = 0; i < n; i++) {
		sum += temp;
		temp = temp * 10 + a;
	}
	cout << sum << endl;
	return 0;
}