#include <iostream>
#include <cmath>
using namespace std;
 
#define ll unsigned long long
#define MAX 100000000
#define LMT 10000
 
unsigned flag[MAX/64];
unsigned prime[5761458], total;
 
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
 
inline void fast(unsigned long long int &x)
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
 
void sieve()
{
    unsigned i, j, k;
        flag[0]|=0;
        for(i=3;i<LMT;i+=2)
                if(!chkC(i))
                        for(j=i*i,k=i<<1;j<MAX;j+=k)
                                setC(j);
        prime[0] = 2;
        for(i=3,j=1;i<MAX;i+=2)
                if(!chkC(i))
                        prime[j++] = i;
        total = j;
    
}
 
ll power(ll n,unsigned p)
{
        ll x=1,y=n;
        while(p>0)
        {
                if(p&1) 
                    x*=y;
                y*=y;
                p>>=1;
        }
        return x;
}
 
inline void update(ll &phi1,ll n,unsigned p)
{
        if(p==1) 
              phi1*=(n+1);
        else 
              phi1*=((power(n,p+1)-1)/(n-1));
}
 
void factor(ll n,ll &phi1)
{
        unsigned i, v;
        ll t;
        phi1=1;
        for(i=0,t=prime[i]; i<total && t*t <= n;t = prime[++i])
        {
                if(n%t==0)
                {
                        v=0;
                        while(n%t==0)
                        {
                                v++;
                                n/=t;
                        }
                        update(phi1,prime[i],v);
                }
        }
        if(n>1) 
             update(phi1,n,1);
}
 
int main()
{
        int t, x;
        ll n, phi1;
        sieve();
        scanf("%d",&t);
        while(t--)
        {
                fast(n);
                factor(n, phi1);
                printf("%llu\n",phi1-n);
        }
        return 0;
}
 
