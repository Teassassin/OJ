#include <iostream>
#include <cmath>
#include <iomanip>
#define Pi 3.1415927
using namespace std;

int main()
{
	double r, v;
	cin >> r;
	v = 4 * Pi * pow(r, 3) / 3;
	cout << setprecision(5) << v << endl;
	return 0;
	//x+a%3*int(x+y)%2/4;
	/*
	float x, y;
	int a;
	cin >> x >> y >> a;
	cout << fixed << setprecision(2) << x+a%3*int(x+y)%2/4 << endl;
	return 0;
	/*
	double x1, x2, y1, y2, result;
	cin >> x1 >> y1 >> x2 >> y2;
	result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << fixed << setprecision(2) << result << endl; 
	return 0;
	*/
}