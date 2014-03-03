#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
vector<int> a[2000];
int visited[2000];
int color[2000];
queue<int> Q;
 
 inline void fast(int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
 
    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());
 
    if(c=='-')
    {
        neg = 1;
        c = getchar_unlocked();
    }
 
    for(; c>47 && c<58 ; c = getchar_unlocked())
    {
        x =(x<<1)+(x<<3) + c - 48;
    }
 
    if(neg)
        x = -x;
} 
int bfs(int u)
{
    int flag=1;
    visited[u]=1;
    color[u]=1;
    Q.push(u);
    while(!Q.empty())
    {
          u=Q.front();    
          Q.pop();
          for(int i=0;i<a[u].size();i++) 
          { 
                  int v=a[u][i];
                  if(color[v]==color[u])
                  {
                        flag=0;
                  }
                  if(!visited[v])
                  { 
                                   visited[v]=1;
                                   color[v]=3-color[u];
                                   Q.push(v);
                  } 
        
 
         
           }
          
    }
    return flag;
}
    
int main()
{
    int N,M,u,v,ans,flag,k;
    int test;
    fast(test);
    for(k=1;k<=test;k++)
    { 
         fast(N);fast(M);
         flag=1;
         for(int i=0;i<N;i++) 
              a[i].clear();
         while(M--)
         {
              fast(u);
              fast(v);
              a[v].push_back(u);
              a[u].push_back(v);
         }
         memset(visited,0,4*N);
         memset(color,0,4*N);
         for(int i=0;i<N;i++)
         {
    
             if(!visited[i])
                 ans=bfs(i);
                 if(ans==0)
                    flag=0;
         }
         
         if(flag==0)
             printf("Scenario #%d:\nSuspicious bugs found!\n",k);
         else
             printf("Scenario #%d:\nNo suspicious bugs found!\n",k);
     }
   
}
