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
     int n;
     scanf("%d",&n);
     int a;
     int arr[32];
     while(n--)
     {
             scanf("%d",&a);
             int index=0;
             ll sum=0;
             if(a%2)
                printf("%d\n",a);
             else
             {
                 memset(arr,0,sizeof(arr));
                 while(a)
                 {
                         arr[index++]=a%2;
                         a/=2;
                 }
                
                 int j=0;
                 for(int i=index-1;i>=0;i--)
                 {        
                          if(arr[i])
                          {
                             sum+=1ll<<j;
                          }
                          j++;
                 }
                 printf("%lld\n",sum);
             }
     }
   
     return 0;
}

