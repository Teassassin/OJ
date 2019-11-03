#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a;
	cin >> a;
	cout << fixed << setprecision(2) << fabs(a) << endl;
	return 0;
}