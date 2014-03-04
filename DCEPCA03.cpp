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

#define MAX 10000


bool isNPrime[10000];
unsigned int Primes[3000],nPrimes=0;
int arr[10002];


int seive()
{
        isNPrime[0]=true;
        isNPrime[1]=true;
        for(int i=0;i*i<MAX;i++)
        {
               if(isNPrime[i]==false)
               {
                      for(int j=i*i;j<MAX;j=j+i)
                      {
                                    isNPrime[j]=true;
                      }
               }
        }
        for(int i=0;i<MAX;i++)
        {
                if(isNPrime[i]==false)
                {
                         Primes[nPrimes++]=i;
                }
        }
}

long pow1(long n, int p)
{
     long long x=1, y=n;
while(p > 0)
{
if(p&1) x *= y;
y *= y;
p >>= 1;
}
return x;
}

 
void dev()
{
   for(int j=1;j<=10001;j++)
   {
     int g=j;
     long res=1;
     for(int i=0;i<nPrimes && Primes[i]<=g;i++)
     {
          int cnt=0;
          while(g%Primes[i]==0) 
          {
                  g=g/Primes[i]; 
                  cnt++;
          }
          if(cnt)
          {
                 res = res*((pow1(Primes[i],cnt-1))*(Primes[i]-1));
          }
     }	
     arr[j]=res;
  }
}

int main()
{
       seive();
       dev();
       int n;
       scanf("%d",&n);
       while(n--)
       {
               int t;
               scanf("%d",&t);
               ll sum=0;
               for(int i=1;i<=t;i++)
               {
                     sum+=arr[i];
               }
               printf("%lld\n",sum*sum);
       }
       return 0;
}
























