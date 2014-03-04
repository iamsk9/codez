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
int const N=50000;
using namespace std;
const double pi = acos(-1.0);
char c[22][22];
int r,c1;
int X,Y,dindex;
int xc[] = {0, 0, 1, -1};
int yc[] = {1, -1, 0, 0};
int arrx[12];
int arry[12];

int flag[22][22];
int a[12];

bool valid(int xx,int yy)
{
    return (xx>=0 && xx<r && yy>=0 && yy<c1);
}

int bfs(int p,int q1,int x,int y)
{
    queue<pair<pair<int,int>,int> >q;
    memset(flag,0,sizeof(flag));
    flag[p][q1]=1;
    q.push(pair<pair<int,int>,int>(pair<int,int>(p,q1),0));
    while(!q.empty())
    {
                     int p1=q.front().first.first;
                     int p2=q.front().first.second;
                     int price=q.front().second;
                     q.pop();
                     if(p1==x && p2==y)
                          return price;
                     for (int i = 0; i < 4; ++i) 
                     {
                           int nx = xc[i] + p1;
                           int ny = yc[i] + p2;
                           if(valid(nx,ny) && !flag[nx][ny] && c[nx][ny]!='x')
                           {
                                           flag[nx][ny]=1;
                                           q.push(pair<pair<int,int>,int>(pair<int,int>(nx,ny),price+1));
                           }
                     }
    }
    return N;
}
                     
    
    

int main()
{
           
  while(scanf("%d%d",&c1,&r))
  {
      if(c1==0 && r==0)
         break;
      dindex=0;
      int distance[22][22][22][22];
      memset(arrx,0,sizeof(arrx));
      memset(arry,0,sizeof(arry));
      for(int i=0;i<r;i++)
      {
              scanf("%s",c[i]);
              for(int j=0;j<c1;j++)
              {
                     if(c[i][j]=='o')
                     {
                                     X=i;
                                     Y=j;
                     }
                     else if(c[i][j]=='*')
                     {
                          arrx[dindex]=i;
                          arry[dindex]=j;
                          dindex++;
                     }
              }
      }
      for(int i=0;i<22;i++)
      {
              for(int j=0;j<22;j++)
              {
                      for(int k=0;k<22;k++)
                      {
                              for(int m=0;m<22;m++)
                              {
                                      distance[i][j][k][m] = N;
                              }
                      }
              }
      }   
      
      for(int i=0;i<dindex;i++)
      {
              distance[X][Y][arrx[i]][arry[i]]=bfs(X,Y,arrx[i],arry[i]);
      }
      for(int i=0;i<dindex;i++)
      {
              for(int j=i;j<dindex;j++)
              {
                       int l1=arrx[i];
                       int l2=arry[i];
                       int l3=arrx[j];
                       int l4=arry[j];
                       distance[l1][l2][l3][l4]=bfs(l1,l2,l3,l4);
                       distance[l3][l4][l1][l2]=distance[l1][l2][l3][l4];
              }
      }
      for(int i=0;i<dindex;i++)
      {
              a[i]=i;
      }
      int ans=N;
      
      do
      {
          int sum=distance[X][Y][arrx[a[0]]][arry[a[0]]];
          for(int i=1;i<dindex;i++)
          {
                  int h=a[i-1];
                  int g=a[i];
                  sum+=distance[arrx[h]][arry[h]][arrx[g]][arry[g]];
          }
          ans=ans<sum?ans:sum;
      }while(next_permutation(a,a+dindex));
      
      if(ans>=N)
         printf("-1\n");
      else
         printf("%d\n",ans);
         
      }
          
     
      return 0;
}

