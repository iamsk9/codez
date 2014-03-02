#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<limits.h>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

typedef long long ll;
typedef long l;

using namespace std;
const double pi = acos(-1.0);

long len[100004];

ll min(ll a,ll b)
{
          return a<b?a:b;
}
ll max(ll a,ll b)
{
          return a>b?a:b;
}

int main()
{
    int n;
   scanf("%d",&n);
    while(n--)
    {
              int a;
             scanf("%d",&a);
              long long sum=0;
              for(int i=0;i<a;i++)
              {
                        scanf("%ld",&len[i]);
                        sum+=len[i];
              }
              
              int x=0,y=0;
              ll ans=INT_MAX,z=0;
              for(int i=0;i<a;i++)
              {
                   y=sum-x-len[i];
                   
                   z=2*min(x,y)+max(x,y);
                   ans=min(ans,z);
                   x+=len[i];
              }
              printf("%lld\n",ans);
    }
    
    return 0;
}


