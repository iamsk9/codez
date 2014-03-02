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

int arr[1000][1000];
inline void fast(int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());

    if(c=='-')
    {
        neg = 1;
        c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked())
    {
        x =(x<<1)+(x<<3) + c - 48;
    }

    if(neg)
        x = -x;
} 

int main()
{
      int n,cnt=1;
      while(1)
      {
              fast(n);
              if(n==0)
                 break;
              int sum=0;
              for(int i=0;i<n;i++)
              {
                      for(int j=0;j<n;j++)
                      {
                              fast(arr[i][j]);
                              sum+=arr[i][j];
                      }
              }
              
              int off=0;
              int in=0;
              int ans=0;
              for(int i=0;i<n;i++)
              {
                      off=0;
                      in=0;
                      for(int j=0;j<n;j++)
                      {
                              off+=arr[i][j];
                      }
                      for(int j=0;j<n;j++)
                      {
                              in+=arr[j][i];
                      }
                      if(off-in>=0)
                      {
                                   ans+=off-in;
                      }
              }
              
              printf("%d. %d %d\n",cnt,sum,ans);
              cnt++;
      }
      
     
      return 0;
}

