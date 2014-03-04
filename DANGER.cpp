#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
long long int f(int re)
{
         int y= (int)log2(re);
         return 2*(re-pow(2,(float)y))+1;
}
         

int main() 
{
       int re;
       char c[5];
       while(scanf("%s",c))
       {
              if(strcmp("00e0",c)==0)
              {
                  break;
              }
              re=((int)c[0]-48)*10+((int)c[1]-48);
              for(int i=1;i<=((int)c[3]-48);i++)
              {
                      re=re*10;
              }
              long long int res=f(re);
              printf("%lld\n",res);
              
       }
       return 0;
}




