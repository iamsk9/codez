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


int main()
{
    int r[1235],c[5679],r1[1235],c1[5679];
    for(int i=1;i<=1234;i++)
        r[i]=r1[i]=i;
    for(int i=1;i<=5678;i++)
        c[i]=c1[i]=i;
    char c2[12];
    while(scanf("%s",&c2)!=EOF)
    {
                              int x,y,z;
                              if(c2[0]=='R')
                              {
                                        scanf("%d%d",&x,&y);
                                        swap(r[x],r[y]);
                                        r1[r[x]]=x;
                                        r1[r[y]]=y;
                              }
                              else if(c2[0]=='C')
                              {
                                        scanf("%d%d",&x,&y);
                                        swap(c[x],c[y]);
                                        c1[c[x]]=x;
                                        c1[c[y]]=y;
                              }
                              else if(c2[0]=='Q')
                              {
                                   scanf("%d%d",&x,&y);
                                   int ans = (r[x]-1)*5678+c[y];
                                   printf("%d\n",ans);
                              }
                              else
                              {
                                   scanf("%d",&z);
                                   int p = (z-1)/5678+1;
                                   int q = (z-1)%5678+1;
                                   printf("%d %d\n",r1[p],c1[q]);
                              }
    }
    
  
   return 0;
}

