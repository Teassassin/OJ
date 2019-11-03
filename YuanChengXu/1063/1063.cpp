#include <iostream>
#include <iomanip>
using namespace std;
int search(int a[],int m)
{
    for(int i = 0; i < 10; i++)
    {
        if(a[i] == m)
            return i;
    }
    return -1;
}
int main()
{
int a[10],m,i,no;
for(i=0;i<10;i++)
   cin>>a[i];
 cin>>m;
no=search(a,m);
if(no!=-1)
   cout<<"found:"<<no+1<<endl;
else
    cout<<"not found!"<<endl;
return 0;
}