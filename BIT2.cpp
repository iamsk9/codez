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
typedef unsigned long long llu;

using namespace std;
const double pi = acos(-1.0);


inline void fast(llu &x)
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

void op(llu x)
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
} 

llu totalbits(llu n)
{
    unsigned long long ans = 0;
    int x = 0;
    for(int i = __lg(n); i >= 0; --i)
        if(n & 1LLU << i)
        {
            n=n-(1LLU<<i);
            ans += ((1LLU << i) >> 1) * i + 1 + n;
        }   
        return ans;
} 


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              llu n,mid;
              fast(n);
              llu l=0;
              llu h=n+1;
              while(l!=h)
              {
                     mid=(l+h)/2;
                     if(totalbits(mid)>=n)
                         h=mid;
                     else
                         l=mid+1;
              }
              if(totalbits(l)==n)
                 op(l);
              else
                 printf("Does Not Exist.\n");
    }
    return 0;
}    

