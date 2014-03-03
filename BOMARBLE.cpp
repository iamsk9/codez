#include<iostream>
using namespace std;
int main()
{
long long int x;
int p[1000];
p[0]=5;
p[1]=12;
for(int i=2;i<1000;i++)
{
       p[i]=(p[i-1]-p[i-2]+3+p[i-1]);
}
while(scanf("%lld",&x))
{
                       if(x==0)
                       {
                               break;
                       }
                       cout<<p[x-1]<<endl;
}
return 0;
}
