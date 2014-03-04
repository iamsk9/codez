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

ll dp[11];
void init()
{
   dp[0]=0;
   ll x=1;
   for(int i=0;i<11;i++)
   {
                 ll sum=dp[i]*10 + 45*(x);
                 dp[i+1]=sum;
                 x*=10;
   }     
}

ll solve(string a)
{
             ll ans = 0;
             int len = a.length();
             ll x = 1;
             for(int i=0;i<len-1;i++)
                       x*=10;
             for(int i=0;i<len;i++)
             {
                       for(int j=0;j<a[0]-'0';j++)
                       {
                         ans+=dp[len-i-1] + j*(x);               
                       }
                       int lm = a[0]-'0';
                       a.erase(0,1);
                       ans+=(lm)*(atoi(a.c_str())+1);           
                       x/=10;
             }
             return ans;
} 

int main()
{   
     init();
     while(1)
     {
         ll an;
         scanf("%lld",&an);
         if(an==-1)
            break;
         an=an-1;
         string a1,a;
         if(an==0)
            a.push_back('0');
         else
         {
             while(an>0)
             {
                  a1.push_back(an%10+'0');
                  an/=10;           
             }
             for(int i=a1.size()-1;i>=0;i--)
             {
                 a.push_back(a1[i]);       
             }
         }
         string b;
         cin>>b;
         ll ansa = solve(a);
         ll ansb = solve(b);
         cout<<ansb-ansa<<endl;
        
     }
  
     return 0;    
}

