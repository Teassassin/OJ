/** 残缺程序（3） */

#include <iostream>
using namespace std;
int m;
int sum;
int count; //用于记录并计算满足条件的n值
void f(int n)
{
 count=n;
 if(sum>=m)
  return;
 else
 {
  sum+=n*n;
  f(n+1);
 }
}
int main()
{
 sum=0;
 count=0;
 cin>>m;
 f(1);     //调用递归函数f
 cout<<count-2<<endl;
 return 0;
}
