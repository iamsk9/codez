#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<stdio.h>
#include<queue>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define in(x) scanf("%d",&x)
#define MOD 1000000007 // 10**9 + 7
#define INF 1e9
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
typedef unsigned long long ll;
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

ll PnC(ll n,ll r)
{
	   if(n<r || n<0 || r<0)
	      return 0;
	   if(n==r)
	      return 1;
	   if(r>n-r)
	      r=n-r;
	   ll ans=1;
	   for(ll i=1;i<=r;i++)
	   {
	   	     ans*=(n-i+1);
	   	     ans/=i;
	   }
	   return ans;
}

string binary(ll n)
{
	   string w="";
	   while(n)
	   {
	   	    w+=(n%2+'0');
	   	    n/=2;
	   }
	   reverse(w.begin(),w.end());
	   return w;
}

ll f(ll n)
{
	  string s=binary(n);
	  ll answer=0,neg=0;
	  ll len;
	  len = s.length();
	  for(int i=0; i<len; i++)
	  {
		if(s[i]=='1')
		{
			int x=len-i-1;
			answer+=PnC(x,4-neg);
			answer+=PnC(x,7-neg);
			answer+=PnC(x,44-neg);
			answer+=PnC(x,47-neg);
			neg++;
		}
	  }
	  return answer;
	  
}
int main()
{
	
	   int t;
	   scanf("%d",&t);
	   while(t--)
	   {
	   	      ll a,b;
	   	      scanf("%lld%lld",&a,&b);
	   	      ll high=f(b+1);
	   	      ll low=f(a);
	   	      printf("%lld\n",high-low);
	   	      
	   }
	   return 0;
	  
}
	
	
	
	
	
	
	
	
	

