#include <iostream>

using namespace std;

int main()
{
	long long id;
	char sex;
	double a, b, c, d;
	cin >> id >> sex >> a >> b >> c >> d;
	if(double(a + b + c + d)/4 > 85) cout << id << " " << "y" << endl;
	else cout << id << " " << "n" << endl;
}