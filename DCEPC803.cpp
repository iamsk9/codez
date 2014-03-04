#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

typedef long long ll;
typedef long l;

using namespace std;
const double pi = acos(-1.0);

int main()
{
  
        int n;
        scanf("%d",&n);
        int arr[n+1][n+1];
        int dis[n+1][n+1];
        int dis1[n+1][n+1];
        int x,y;
        int count=0;
        for(int i=1;i<=n;i++)
        {
                for(int j=1;j<=n;j++)
                {
                        scanf("%d",&arr[i][j]);
                        if(arr[i][j]==-1)
                        {
                           x=i;
                           y=j;
                        }
                }
        }
        
        
        for (int i = 1; i <=n; i++)
        {
                   for (int j = 1; j <=n; j++)
                   {
                       scanf("%d",&dis[i][j]);
                   }
        }
 
        int r=dis[x][y];
 
        while(r<=100)
        {
           int flag=1;
           
           for (int i = 1; i <=n; i++)
           {
                   for (int j = 1; j <=n; j++)
                   {
                       dis1[i][j]=arr[i][j];
                   }
           }
           dis1[x][y]=r;
                    for (int k = 1; k <=n; k++)
                    {
                          for (int i = 1; i <=n; i++)
                          {
                                 for (int j = 1; j <=n; j++)
                                 {
                                    if (dis1[i][k] + dis1[k][j] < dis1[i][j])
                                    {
                                            dis1[i][j] = dis1[i][k] + dis1[k][j];
                      
                                    }
                                  }
                                  
                           }
                           
                    }
                    for (int i = 1; i <=n; i++)
                          {
                                 for (int j = 1; j <=n; j++)
                                 {
                                     if(dis1[i][j]!=dis[i][j])
                                        flag=0;
                                 }
                          }
                    
         if(flag)
            count++;
         r++;
        }
        printf("%d\n",count);
        return 0;
}

