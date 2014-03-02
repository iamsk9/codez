#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstdlib>
#include<stack>
#include<queue>

typedef long long ll;
typedef long l;

using namespace std;
const double pi = acos(-1.0);
#define MAX 1000000
#define LMT 1000
 
unsigned flag[MAX/64];
unsigned prime[78500], total;
 
#define chkC(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define setC(n) (flag[n>>6]|=(1<<((n>>1)&31)))
 
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

int first[1002],second[1002],dfirst[1002],dsecond[1002];

int main()
{
    sieve();
    int a,b;
    int cnt=1;
    while(1)
    {
            fast(a);fast(b);
            int h,v=0;
            h=a;
            int na=0,nb=0;
            if(!a)
               break;
            for(int j=0,t=prime[j];t*t<=h; t=prime[++j])
            {
                v=0;
                if(h%t==0)
                {
                        
                        while(h%t==0)
                        {
                                v++;
                                h/=t;
                        }
                        first[na]=prime[j];
                        dfirst[na++]=v;
                        
                }
                if(h==1)
                    break;
            }
            if(h!=1)
            {
                        first[na]=h;
                        dfirst[na++]=1; 
            }
            
            h=b;
            for(int j=0,t=prime[j];t*t<=h; t=prime[++j])
            {
                v=0;
                if(h%t==0)
                {
                        
                        while(h%t==0)
                        {
                                v++;
                                h/=t;
                        }
                        second[nb]=prime[j];
                        dsecond[nb++]=v;
                        
                }
                if(h==1)
                    break;
            }
            if(h!=1)
            {
                        second[nb]=h;
                        dsecond[nb++]=1; 
            }
            int i=0,j=0,ans=0,dis=0;
            while(i<na && j<nb)
            {
               if(first[i]==second[j])
               {
                   ans++;
                   dis+=abs(dfirst[i]-dsecond[j]);
                   i++;
                   j++;
               }
               else if(first[i]<second[j])
               {
                   ans++;
                   dis+=dfirst[i];
                   i++;
               }
               else
               {
                   ans++;
                   dis+=dsecond[j];
                   j++;
               }
            }
                 
            while(i==na && j<nb)
            {
               ans++;
               dis+=dsecond[j];
               j++;
            }
            while(i<na && j==nb)
            {
               ans++;
               dis+=dfirst[i];
               i++;
             }
             printf("%d. %d:%d\n",cnt,ans,dis);
             cnt++;
    }
               
    return 0;
}



