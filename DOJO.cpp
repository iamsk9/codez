#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int x;
    scanf("%d",&x);
    while(x--)
    {
              int a,p,len1,len2;
              char b[2050],q[2050];
              scanf("%d%s%d%s",&a,b,&p,q);
              len1=strlen(b)-1;
              len2=strlen(q);
              if(((a&1)!=0)&&(b[len1]=='1'||b[len1]=='3'||b[len1]=='5'||b[len1]=='7'||b[len1]=='9'))
              {
                      if((a==1)&&((b[0]=='1')&&(b[1]=='\0')))
                      {
                             printf("Impossible.\n");
                      }
                      else
                      {
                        int yy=0,rr=0;
                        yy=(q[len2-1]-48);
                        rr=p+yy;
                        if(rr%2==0)
                        {
                                 printf("Possible.\n");
                        }
                        else
                        {
                                 printf("Impossible.\n");
                        }
                      }
              }
              else
              {
                  printf("Impossible.\n");
              }
    }
    return 0;
}
                     


