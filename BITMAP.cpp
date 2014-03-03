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
int const max1=100000;
char arr[190][190];
int r,c;
int ans[190][190];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void bfs()
{
     queue<pair<int,int> >q;
     for(int i=0;i<r;i++)
     {
                         for(int j=0;j<c;j++)
                         {
                                      ans[i][j]=max1;
                         }
     }
     for(int i=0;i<r;i++)
     {
                         for(int j=0;j<c;j++)
                         {
                                 if(arr[i][j]=='1')
                                 {
                                      ans[i][j]=0;
                                      q.push(pair<int,int>(i,j));
                                 }
                         }
     }
     while(!q.empty())
     {
                      int fst=q.front().first;
                      int scnd=q.front().second;
                      q.pop();
                      for(int s=0;s<4;s++)
                      {
                             if(fst+dx[s]>= 0 && scnd+dy[s]>=0 && fst+ dx[s]<r && scnd+dy[s] <c && ans[fst+dx[s]][scnd+dy[s]]>ans[fst][scnd]+1)
                             {
                                    ans[fst+dx[s]][scnd+dy[s]]=ans[fst][scnd]+1;
                                    q.push(pair<int,int>(fst+dx[s],scnd+dy[s]));
                             }
                      }
     }
                      
}
int main()
{

       int n;
       scanf("%d",&n);
       while(n--)
       {
                 memset(arr,0,sizeof(arr));
                 scanf("%d%d",&r,&c);
                 getchar();
                 for(int i=0;i<r;i++)
                 {
                         scanf("%s",arr[i]);
                 }
                 
                 bfs();
                 
                 for(int i=0;i<r;i++)
                 {
                         for(int j=0;j<c;j++)
                         {
                                  printf("%ld ",ans[i][j]);
                         }
                         printf("\n");
                 }
       }
                 
     
       return 0;
}

