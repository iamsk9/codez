#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
int t,n,m,a[10010];
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&m);
for(int i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
int ans=1,bag=n,col;
bool end=false;
while(!end)
{
col=ans;
// cout << "trying.." << col << endl;
bag=n-ans;
if(bag<0)
{
printf("-1\n");
break;
}
for(int i=1;i<m;i++)
{
if(a[i]!=a[i-1])
{
bag-=a[i]-a[i-1];
col+=a[i]-a[i-1];
 
}
else
{
col-=1;
}
if(bag<0)
{
printf("-1\n");
end=true;
break;
 
}
else if(col<1)
{
ans+=(-col)+1;
break;
}
 
 
}
if(!end && col>0)
{
printf("%d\n",ans);
break;
}
}
}
return 0;
}
