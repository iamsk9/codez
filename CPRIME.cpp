#include <iostream>
#include <cmath>
using namespace std;
#define MAX 100000000
 
unsigned flag[MAX/64];
int a[5761457], total;
 
#define chk(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define set(x) (flag[x>>6]|=(1<<((x>>1)&31)))

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
        int i, j, k;
        for(i=3; i<10000; i+=2)
                if(!chk(i))
                        for(j=i*i,k=i<<1;j<MAX;j+=k)
                                set(j);
        a[0]=-1;
        a[1]= 2;
        for(i=3,j=2; i<MAX; i+=2)
                if(!chk(i))
                        a[j++] = i;
        total = j;
}
 
int bs(int st, int fn, int val)
{
    int mid;
    while(st <= fn)
    {
        if(val < a[st]) 
              return st-1;
        if(val > a[fn]) 
              return fn;
        mid = (st+fn) / 2;
        if(val == a[mid]) 
             return mid;
        else if(val < a[mid]) 
             fn = mid-1;
        else 
             st = mid+1;
    }
    return total-1;
}
 
int main()
{
        sieve();
        int i, n;
        double x, p, r;
        while(1)
        {
                fast(n);
                if(!n)
                  break;
                p = bs(0,total-1,n);
                x = n;
                r = (fabs(p - x/log(x))/p) * 100.0;
                printf("%.1lf\n",r);
        }
        return 0;
}


