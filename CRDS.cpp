#include<iostream>
using namespace std;
int main()
{
long long int x,b,*p;
p=new long long int[1000000];
p[0]=2;
p[1]=7;
for(int i=2;i<1000000;i++)
{
       p[i]=(p[i-1]-p[i-2]+3+p[i-1]);
}
cin>>x;
while(x--)
{
cin>>b;
cout<<p[b-1]%1000007<<endl;
}
delete[]p;
return 0;
}
