#include<iostream>
#include<stdio.h>
using namespace std;
#define ll long long
ll f(int n)
{
         ll a=2;
         ll res=1;
         while(n)
         {
                 if(n&1)
                    res*=a;
                 n=n/2;
                 a*=a;
         }
         return res;
}
int main()
{
     
      int n;
      ll k;
      
      scanf("%d%lld",&n,&k);
      ll res1=f(n);
      ll res=res1-k-1;
      int y=0;
      while(res)
      {
            if(res%2==1)
                 y++;
            res/=2;
      }
      if(y%2==0)
           printf("red\n");
      else
           printf("blue\n");
    
      return 0;
}
           




