// ×éºÏÊý2
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*string x, y;
	cin >> x >> y;
	string z = new char[5] {x[1], y[1], x[0], y[0]};
	cout << atoi(z.c_str()) << endl;
	return 0;*/
	int x, y, z;
	cin >> x >> y;
	z = y / 10 + x / 10 * 10 + y % 10 * 100 + x % 10 * 1000;
	cout << z << endl;
	return 0;
}