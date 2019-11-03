#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, delt, x1, x2;
	cin >> a >> b >> c;
	delt = b * b - 4 * a * c;
	if(a == 0 || delt < 0) cout << "Please enter available arguments!" << endl;
	else
	{
		x1 = (-b + sqrt(delt)) / (2 * a);
		x2 = (-b - sqrt(delt)) / (2 * a);
		cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
	}
	return 0;
}