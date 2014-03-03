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
/*inline void fast(int &x)
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
}   */
 
long f(int n,queue<pp>q)
{
     if(q.empty())
     {
                  if(n==0)
                      return 1;
                  else
                      return 0;
     }
     else
     {
          int r=0;
          pp d=q.front();
          q.pop();
          for(int i=d.first;i<=d.second;i++)
          {
                  r+=f(n-i,q);
          }
          return r;
     }
}
int main()
{
 
     int a,b;
     while(1)
     {
             cin>>a>>b;
             
             if(!a && !b)
                break;
             queue<pp>q;
             for(int i=0;i<a;i++)
             {
                     int x,y;
                     cin>>x>>y;
                     q.push(pp(x,y));
             }
             long ans=f(b,q);
             cout<<ans<<endl;
     }
     
 
   return 0;
}
