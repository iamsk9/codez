#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
 
typedef long long ll;
typedef long l;
 
using namespace std;
const double pi = acos(-1.0);
int waiter[101][101];
int cust[101][101];
unsigned long long price[101][101];
 
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
 
inline void fast1(unsigned long long int *a)
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
 
int main()
{
        int n1;
        fast(&n1);
        while(n1--)
        {
                  int m,n;
                  memset(waiter,0,sizeof(waiter));
                  memset(cust,0,sizeof(cust));
                  memset(price,0,sizeof(price));
                  
                  fast(&m);fast(&n);
                  for(int i=1;i<=m;i++)
                  {
                          for(int j=1;j<=n;j++)
                          {
                                  fast(&waiter[i][j]);
                          }
                  } 
                  for(int i=1;i<=m;i++)
                  {
                          for(int j=1;j<=n;j++)
                          {
                                  fast(&cust[i][j]);
                          }
                  } 
                  for(int i=1;i<=m;i++)
                  {
                          for(int j=1;j<=n;j++)
                          {
                                 fast1(&price[i][j]);
                          }
                  } 
                  
                  ll ans=0;
                  ll res=0;
                  for(int i=1;i<=m;i++)
                  {
                          for(int j=1;j<=n;j++)
                          {
                                  int min = waiter[i][j]<cust[i][j]?waiter[i][j]:cust[i][j];
                                  ll d = min*price[i][j];
                                  if(d>res)
                                     res=d;
                          }
                          ans+=res;
                          res=0;
                  }
                  
                  printf("%lld\n",ans);
        }
        
       
        return 0;
}
