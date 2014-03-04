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

/*
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

void op(int x)
{
    if(x<0)
    {
         putchar('-');
         x=-x;
    }
    int len=0,data[20];
    while(x)
    {
        data[len++]=x%10;
        x/=10;
    }
    if(!len)
       data[len++]=0;
    while(len--)
        putchar(data[len]+48);
    putchar('\n');
} */

struct s
{
       int cost;
       int flag;
};

int f(const void *a,const void *b)
{
    s *x=(s*)a;
    s *y=(s*)b;
    return  (y->cost - x->cost);
}

int main()
{
     int t;
     scanf("%d",&t);
     printf("\n");
     while(t--)
     {
               int m,n;
               s p[3000];
               int i=0;
               scanf("%d%d",&m,&n);
               for(i=0;i<m-1;i++)
               {
                  scanf("%d",&p[i].cost);
                  p[i].flag=0;
               }
               int uu=i;
               for(int j=i;j<uu+n-1;j++)
               {
                  scanf("%d",&p[j].cost);
                  p[j].flag=1;
               }
               int ans=0;
               int x,y;
               qsort(p,uu+n-1,sizeof(p[0]),f);
               for(i=0,x=0,y=0;i<uu+n-1;++i)
               {
	                ans+=p[i].cost*((p[i].flag?x:y)+1);
                    p[i].flag?++y:++x;
               }
               printf("%d\n",ans);
    }
    return 0;
}
               
    
    
      

