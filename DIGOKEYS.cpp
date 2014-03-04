#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>

#include<queue>

#define	flag(x,c) ((c).find(x)!=(c).end())  


using namespace std;

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

void show(int n, map<int,int>& m)
{
      vector<int>ans;
      int num=m[n];
      while(num!=1)
      {
                   ans.push_back(num);
                   num=m[num];
      }
      ans.push_back(1);
      for(int i=ans.size()-1;i>=0;i--)
      {
              printf("%d ",ans[i]);
      }
      printf("\n\n");
}

void bfs()
{
               int n,p,y;
               vector<int>v[100002];
               map<int,int>m;
               queue<pair<int,int> >q;
               fast(n);
               for(int i=1;i<n;i++)
               {
                       fast(p);
                       for(int j=0;j<p;j++)
                       {
                               fast(y);
                               v[i].push_back(y);
                       }
                       sort(v[i].begin(),v[i].end());
               }
               
               m[1]=-1;
               q.push(pair<int,int>(1,0));
               while(!q.empty())
               {
                                 int fst = q.front().first;
                                 int d = q.front().second;
                                 q.pop();
                                 if(fst==n)
                                 {
                                       printf("%d\n",d);
                                       show(n,m);
                                       return ;
                                 }
                                 int size=v[fst].size();
                                 for(int i=0;i<size;i++)
                                 {
                                         if(!flag(v[fst][i],m))
                                         {
                                               q.push(pair<int,int>(v[fst][i],d+1));
                                               m[v[fst][i]]=fst;
                                         }
                                 }
               }
               printf("-1\n\n");
               return ;
}
               
int main()
{
     int t;
     fast(t);
     while(t--)
     {
               bfs();
     }
   
     return 0;
}

