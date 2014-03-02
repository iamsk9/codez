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
const int inf = 0x0fffffff;
typedef long long ll;
typedef long l;

using namespace std;
const double pi = acos(-1.0);

int arr[504][504];
int dp[504][504];


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

int f(int mid,int r,int c)
{
       dp[1][1]=mid;
       for(int i=1;i<=r;i++)
       {
                     for(int j=1;j<=c;j++)
                     {
                             if(i!=1 || j!=1)
                             {
                                  dp[i][j]=-inf;
                                  if(dp[i-1][j]>0)
                                       dp[i][j]=max(dp[i][j],dp[i-1][j]);
                                  if(dp[i][j-1]>0)
                                       dp[i][j]=max(dp[i][j],dp[i][j-1]);
                                  dp[i][j]+=arr[i][j];
                             }
                     }
       }
       if(dp[r][c]>0)
         return 1;
       else
         return 0;
}
                             
    
int main()
{
      int n;
      fast(&n);
      for(int i=0;i<504;i++)
      {
              dp[0][i]=-inf;
              dp[i][0]=-inf;
      }
      while(n--)
      {
             int r,c,l=1;
             fast(&r);fast(&c);
             int r1=0;
             for(int i=1;i<=r;i++)
             {
                     for(int j=1;j<=c;j++)
                     {
                            scanf("%d",&arr[i][j]);
                            if(arr[i][j]<0)
                               r1+=arr[i][j];
                     }
             }
             
             r1=-r1;
             
             while(l<r1)
             {
                 int mid=(l+r1)/2;
                 if(f(mid,r,c))
                     r1=mid;
                 else
                     l=mid+1;
             }
             
             printf("%d\n",l);
      }
      
       return 0;
}



