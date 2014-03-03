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
#define pp pair<int,int>
#define p pair<pair<int,int>,pair<int,int> >

p v[101][101];
struct grt
{
         bool operator()(const p &a, const p &b) 
         {
                 return (a.first.first > b.first.first);
         }
};

int r,c;

int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};


inline void fast(int *a)

{
       register char c=0;
       while (c<33) c=getchar_unlocked();
       *a=0;
       while (c>33)
       {
            *a=*a*10+c-'0';
             c=getchar_unlocked();
       }
}

void dijkestra()
{
       
       	priority_queue<p,vector<p>,grt>q;
        v[1][1].first.first = v[1][1].first.second;
        q.push(v[1][1]);
        while(!q.empty())
        {
                         int dis = q.top().first.first;
                         int cos = q.top().first.second;
                         int x = q.top().second.first;
                         int y = q.top().second.second;
                         
                         q.pop();
                         for(int i=0;i<4;i++)
                         {
                                 if(x+dx[i]<=r && x+dx[i]>=1 && y+dy[i]<=c && y+dy[i]>=1)
                                 {
                                               int dis1=v[x+dx[i]][y+dy[i]].first.first;
                                               int cos1=v[x+dx[i]][y+dy[i]].first.second;
                                               int xx=v[x+dx[i]][y+dy[i]].second.first;
                                               int yy=v[x+dx[i]][y+dy[i]].second.first;
                                               
                                               if(dis+cos1<dis1)
                                               {
                                                         v[x+dx[i]][y+dy[i]].first.first=dis+cos1;
                                                         q.push(v[x+dx[i]][y+dy[i]]);
                                               }
                                 }
                         }       
        }
}
                                               


int main()
{
           int n;
           fast(&n);
           while(n--)
           {
                     fast(&r); fast(&c);
                     int val;
                     for(int i=1;i<=r;i++)
                     {
                           for(int j=1;j<=c;j++)
                           {
                                 fast(&val);
                                v[i][j].first.first=1000000;
                                v[i][j].first.second=val;
                                v[i][j].second.first=i;
                                v[i][j].second.second=j;
                           }
                     }
                     
                     int x,y,t;
                     dijkestra();
                     
                      fast(&x); fast(&y); fast(&t);
                     
                     if(v[x][y].first.first<=t)
                         printf("YES\n%d\n",t-v[x][y].first.first);
                     else
                         printf("NO\n");
                     
            }


           
            return 0;
}

