#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>


typedef long long ll;
typedef long l;

using namespace std;
const double pi = acos(-1.0);

long long int sum[2001][2001];
long long int ppl[1005];
int area[1005];
int n,m,q,k;

inline void fast(int *a)

{
       register char c=0;
       while (c<33) c=getchar_unlocked();
       *a=0;
       while (c>33)
       {
            *a=*a*10+c-'0';
             c=getchar_unlocked();
       }
}

ll knapsack()
{
     int ans[q+1][k+1];
     
     
     for(int i=0;i<=q;i++)
     {
             for(int j=0;j<=k;j++)
             {
                     if(i==0||j==0)
                         ans[i][j]=0;
                     else if(ppl[i-1]>j)
                         ans[i][j]=ans[i-1][j];
                     else
                         ans[i][j]=max(ans[i-1][j],ans[i-1][j-ppl[i-1]]+area[i-1]);
             }
     }
     return ans[q][k];
     
}


int main()
{
    
    
    fast(&n);fast(&m);fast(&q);fast(&k);
    
    for(int i=0;i<n;++i) 
            sum[i][0] = 0;
    for(int i=0;i<m;++i) 
            sum[0][i] = 0;
    
    
    for(int i=1;i<=n;i++)
    {
          for(int j=1;j<=m;j++)
          {  
                  int x;
                  fast(&x);
                  sum[i][j]=x+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
          }
    }
    
    
    for(int j=0;j<q;j++)
    {
            int r1,c1,r2,c2;
            fast(&r1);fast(&c1);fast(&r2);fast(&c2);
            ppl[j]= sum[r2][c2]-sum[r1-1][c2]-sum[r2][c1-1]+sum[r1-1][c1-1];
            area[j]=(r2-r1+1)*(c2-c1+1);
    }
    
    ll ans=knapsack();
    printf("%lld\n",ans);
    
    
    return 0;
}


