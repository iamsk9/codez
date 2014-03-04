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

ll b(ll n)
{
             ll low=0,mid=0;
             ll high=10000000;
             while(low<high)
             {
                            ll mid=(low+high)/2;
                            ll k=1LL*mid*mid+1LL*mid+1LL*2;
                         
                            if(k>=n)
                            {
                                    high=mid;
                            }
                            else
                            {
                                low=mid+1;
                            }
             }
             
             return low;
}
             
int main()
{

     int t;
     cin>>t;
     while(t--)
     {
               ll n;
               cin>>n;
               ll ans=b(2*n);
               cout<<ans<<endl;
     }
    
     return 0;
}

