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

/*
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

void op(int x)
{
    if(x<0)
    {
         putchar('-');
         x=-x;
    }
    int len=0,data[20];
    while(x)
    {
        data[len++]=x%10;
        x/=10;
    }
    if(!len)
       data[len++]=0;
    while(len--)
        putchar(data[len]+48);
    putchar('\n');
} */

const int MAXN = 500;
const int inf = 1000000;

ll p[MAXN];
int n,k;

bool f(ll key)
{
     ll t=0;
     int cnt=1;
     for(int i=0;i<n;i++)
     {
             if(p[i]>key)
             {
                         cnt=inf;
                         break;
             }
             if(t+p[i]>key)
             {
                           cnt++;
                           t=0;
             }
             t+=p[i];
     }
     
     return cnt<=k;
}
             
     
int main()
{

        int t;
        scanf("%d",&t);
        while(t--)
        {
                  scanf("%d%d",&n,&k);
                  int sign[1000];
                  ll low=0,high=0;
                  memset(sign,0,sizeof sign);
                  for(int i=0;i<n;i++)
                  {
                    scanf("%d",&p[i]);
                    high+=p[i];
                  }
                  ll m;
                  while(low<high) 
                  {
                      m=(low+high)/2LL;
                      if(f(m)) 
                         high = m;
                      else 
                         low = m+1;
                  }
                  
                  ll t=0;
                  int y=k;
                  for(int i=n-1; i>=0; i--) 
                  {
                          if(t+p[i]>high) 
                          {
                                          sign[i+1]=1;
                                          y--;
                                          t=0;
                          }
                          else if(i+1==y-1)
                          {
                               for(int j=i; j>=0; j--) 
                               {
                                     sign[j+1]=1;
                               }
                               break;
                          }
                          t+=p[i];
                  }
                  
                  for(int i=0;i<n;i++)
                  {
                          printf("%d",p[i]);
                          if(sign[i+1]==1)
                             printf(" /");
                          if(i!=n-1)
                             printf(" ");
                  }
                  printf("\n");
        }
        return 0;
}
                  











