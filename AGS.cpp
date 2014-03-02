#include<iostream> 
#include<stdio.h> 
#include<string.h> 
#include<math.h> 
using namespace std; 
       
long long mulmod(long long a,long long b,long long c)
{ 
     long long x=0,y=a%c; 
     while(b>0)
     { 
             if(b%2==1)
             { 
                    x=(x+y)%c; 
             } 
             y=(y*2)%c; 
             b/= 2; 
     } 
     return x%c; 
}

long long POWER(long long r2,long long n1,long long int n) 
{ 
     long long ans=1; 
     while(n1>0) 
     { 
                 if((n1&1)>0) 
                 {
                      ans=mulmod(ans,r2,n); 
                 }
                 n1>>=1; 
                 r2=mulmod(r2,r2,n); 
     } 
     return ans%n; 
} 

long long int GEOSUM(long long int r,long long int n,long long int mod) 
{ 
     if(n==0) 
     { 
              return 0; 
     } 
     else 
     { 
          if(n%2==0) 
          { 
                     return ((POWER(r,n/2,mod)+1)*GEOSUM(r,n/2,mod))%mod; 
          } 
          else 
          { 
                     return (GEOSUM(r,n-1,mod)+POWER(r,n,mod))%mod; 
          } 
     } 
} 

int main() 
{ 
    long long int a,d,r,n,mod,p,p1,t1,n1,t,n2; 
    scanf("%lld",&t); 
    while(t--) 
    { 
               scanf("%lld%lld%lld%lld%lld",&a,&d,&r,&n,&mod); 
               p=(n-1)/2; 
               n1=((a%mod)*POWER(r,p,mod))%mod; 
               t1=1+GEOSUM(r,p,mod); 
               if(n%2==1)
                   t1=(t1+mod-1)%mod; 
               n2=((d%mod)*t1)%mod;
               long long int ans=(n1+n2)%mod; 
               printf("%lld\n",ans); 
    } 
    return 0;
    
}

