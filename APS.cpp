#include <vector>
#include <iostream>
using namespace std;
 
const int MAX = 10000000;
long int factor[MAX+1];
 
long long ans[MAX+1];
 
 
inline void fast(long int *a)
 
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
 
void precompute()
{
    for(long int i = 1; i <= MAX; i++) 
    {
        factor[i] = i;
    }
    
    for(long int i = 2; i * i <= MAX; i++) 
    {
            if (factor[i] == i) 
            {
                    for(long int j = i + i; j <= MAX; j += i) 
                    {
                           if(factor[j]==j)
                                  factor[j] = i;
                    }
            }
    }
}
 
void pre()
{
     ans[0]=0;
     ans[1]=0;
     for(long int i=2;i<=MAX;i++)
     {
              ans[i]=ans[i-1]+factor[i];
     }
}
 
 
 
int main() 
{
    precompute();
    pre();
    long n;
    fast(&n);
    while(n--)
    {
              long a;
              fast(&a);
              printf("%lld\n",ans[a]);
    }
   
    return 0;
}


