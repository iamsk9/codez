#include<iostream>
#include<cstring>
static int a[2002][2002];
using namespace std;
int main()
{
    char c[1111];
    int x,y;
    x=1001;
    y=1001;
    while(scanf("%s",c))
    {
                        if(c[0]=='Q')
                        {
                                     break;
                        }
                        memset(a,0,sizeof(a));
                        int i=0;
                        int count=0;
                        for(i=0;c[i]!='Q';i++)
                        {
                               a[x][y]++;
                               if(a[x][y]>1)
                               { 
                                   count++;
                               }
                               if(c[i]=='U')
                                  x--;         
                               else if(c[i]=='D')
                                  x++;         
                               else if(c[i]=='R')
                                  y++;         
                               else if(c[i]=='L')
                                  y--;
                        }
                        if (a[x][y]>=1)
                        {
                             count++;
                        }
                        printf("%d\n",count);
    }
    return 0;
}


