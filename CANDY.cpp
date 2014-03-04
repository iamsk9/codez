#include<iostream>
using namespace std;
int main()
{
    long int x;
    while(scanf("%ld",&x))
    {
                          if(x==-1)
                          {
                                   break;
                          }
                          int max,a[x],c=0;
                          long int sum=0,sum1=0;
                          for(int i=0;i<x;i++)
                          {
                                  scanf("%d",&a[i]);
                                  sum=sum+a[i];
                          }
                          if(sum%x==0)
                          {
                                      int z=sum/x;
                                      for(int i=0;i<x;i++)
                                      {
                                           if(a[i]<z)
                                           sum1=sum1+(z-a[i]);
                                      }
                                      printf("%d\n",sum1);
                          }
                          else
                          {
                              printf("-1\n");
                          }
    }
    return 0;
}
