#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
long int n[100005];
struct bureo
{
       char c[8];
       long int num;
};
int main()
{
    int x;
    scanf("%d",&x);
    while(x--)
    {
              long int a,y;
              bureo b[100005];
              memset(n,1,sizeof(n));
              scanf("%ld",&y);
              for(int i=1;i<=y;++i)
              {
                     scanf("%s",b[i].c);
                     if(strcmp(b[i].c,"cancel")==0) 
                     {
                                 scanf("%ld",&b[i].num);
                     }
                     else
                     {
                           b[i].num=0;
                     }
              }
              for(int i=y;i>=1;--i)
              {
                      if((strcmp(b[i].c,"cancel")==0)&&(n[i]!=0))
                      {
                           if(n[b[i].num]!=0)
                           {
                                 n[b[i].num]=0;
                           }
                      }
              }
              long u=0;
              u=count(n+1,n+y,0);
              printf("%ld\n",y-u);
              for(int i=1;i<=y;++i)
              {
                      if(n[i]!=0)
                      {
                                 printf("%ld",i);
                                 printf(" ");
                      }
              }
              printf("\n");
    }
    return 0;
}
              
    
                 
    

