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

#define MAX 1000000
int N,M;

bool isNPrime[10000000];
int Primes[2000000],nPrimes=0;
int knum[1000],kn=0;
 
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

int seive()
{
        isNPrime[0]=true;
        isNPrime[1]=true;
        for(int i=0;i*i<2*MAX;i++)
        {
               if(isNPrime[i]==false)
               {
                      for(int j=i*i;j<2*MAX;j=j+i)
                      {
                                    isNPrime[j]=true;
                      }
               }
        }
        for(int i=0;i<2*MAX;i++)
        {
                if(isNPrime[i]==false)
                {
                         Primes[nPrimes++]=i;
                }
        }
}

int pow1(int x, int n)
{
     if(n==0) 
         return 1;
     int r = pow1(x, n/2);
     r=r*r;
     if(n%2==1)
         r=r*x;
     return r;
}
 
int dev(int n)
{
   int res=1;
   if(isNPrime[n]==false)
        return n+1;
   for(int i=0;i<nPrimes && Primes[i]<=n;i++)
   {
          int cnt=0;
          while(n%Primes[i]==0) 
          {
                  n=n/Primes[i]; 
                  cnt++;
          }
          if(cnt)
          {
                 res = res*(pow1(Primes[i],cnt+1)-1)/(Primes[i]-1);
          }
   }	
   return res;
}

int main()
{
       seive();
       knum[kn++]=2;
       for(int i=1;i*i<=MAX;i++)
       {
               int k = dev(i*i);
               if(isNPrime[k]==false)
                        knum[kn++] = i*i;
       }
       int t, a, b;
       fast(&t);
       while(t--)
       {
               fast(&a);fast(&b);
               int x,y;
               for(x=0; x<kn && knum[x]<a; x++);	
               for(y=kn-1; y>=0 && knum[y]>b; y--);	
               printf("%d\n",y-x+1);
       }
       return 0;
}























