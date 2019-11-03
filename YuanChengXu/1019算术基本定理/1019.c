#include<iostream>
using namespace std;
int main()
{
	int n,i = 2;
	cin>>n;
	while(n != 1)
	{
		if(n%i==0) 
		{
			cout << i;
			n /= i;
			if(n != 1)
				cout << "*";
		}
		else
			i++;
	}
	return 0;
}