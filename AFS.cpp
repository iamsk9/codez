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

unsigned long long arr[1000005];
int f[1000005];


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

void factor()
{
        unsigned long long  sum=0,s=0;
        memset(f, 0, sizeof(f));
        for (int i=1; i<=1000003; ++i) 
        {
               sum = i+i;
               while (sum< 1000003) 
               {
                    f[sum]+=i;
                    sum+= i;
               } 
        }
}

int main()
{
     int q;
     int n;
     factor();
     
     arr[0]=0;
     arr[1]=0;
     
     for(int i=2;i<=1000000;i++)
     {
             arr[i]=arr[i-1]+f[i];
     }
     
     fast(q);
     while(q--)
     {
                fast(n);
                printf("%lld\n",arr[n]);
     }
  
     return 0;
}


