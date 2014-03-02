#include<iostream>
using namespace std;
int a[10000000];
int main()
{
    int x,max=0,k,l,index;
    scanf("%d",&x);
    printf("\n");
    for(int i=1;i<=x;i++)
    {
            scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    max=a[1];
    index=1;
    for (int i=2;i<=k;i++)
    {
          if(a[i]>max)
          {
                      max=a[i];
                      index=i;
          }
    }
    printf("%d ",max);
    for (int i=k+1;i<=x;i++)
    {
            if(i-k==index)
            {
                       max=a[index+1];
                       index=index+1;
                       for (int j=index+2;j<=i;j++)
                       {
                           if(a[j]>max)
                           {
                                       max=a[j];
                                       index=j;
                           }
                       }
                       printf("%d ",max);
            }
            else if(a[i]>max)
            {
                 max=a[i];
                 index=i;
                 printf("%d ",max);
            }
            else
            {
                printf("%d ",max);
            }
    }
    printf("\n");
    return 0;
}
    

