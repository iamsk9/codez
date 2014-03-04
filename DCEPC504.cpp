#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
     
      int n;
      long long k;
      scanf("%d%lld",&n,&k);
      long long res=k-1;
      int y=0;
      while(res)
      {
            if(res%2==1)
                 y++;
            res/=2;
      }
      if(y%2==0)
           printf("Male\n");
      else
           printf("Female\n");
    }
    return 0;
}
           

