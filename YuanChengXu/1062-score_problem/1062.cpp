#include <iostream>
#include <iomanip>
using namespace std;
int fun(int score[],int below[],int m)
{
    int counts = 0, sum = 0;
    for(int i = 0; i < m; i++)
        sum += score[i];
    for(int i = 0; i < m; i++)
    {
        if(score[i] < sum / m){
            below[counts] = score[i];
            counts++;
        }
    }
    return counts;
}
int main()
{
   int a[100],b[100],c,m;
   cin>>m;
   for(int i=0;i<m;i++)
   {
 cin>>a[i];
   }
   c=fun(a,b,m);
   cout<<c<<":";
   for(int i=0;i<c;i++)
   {
      cout<<b[i]<<",";
   }
   cout<<endl;
   return 0;
}
