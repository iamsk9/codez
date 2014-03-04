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

ll fact(int a)
{
     if(a==1 || a==0)
        return 1;
     else
        return fact(a-1)*a;
}
            
int main()
{

   int n,k;
   while(scanf("%d %d",&n,&k)!=EOF)
   {
              int l;
              ll ans=1;
              for(int i=1;i<=k;i++)
              {
                      scanf("%d",&l);
                      ans*=fact(l);
              }
              ll h=fact(n);
              cout<<h/ans<<endl;
   }
   
   return 0;
}

