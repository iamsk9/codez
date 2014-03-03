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

int arr[100004];

int main()
{

     int m,n;
     ll sum=0;
     scanf("%d%d",&m,&n);
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
         sum+=arr[i];
     }
     sum-=m;
     int y=n,taken;
     ll res= 0;
     sort(arr,arr+n);
     for(int i=0;i<n;i++){
             taken=sum/y;
             if(taken>arr[i]){
                      res+= 1LL*arr[i]*1LL*arr[i];
                      sum-=arr[i];
                      y--;
             }
             else{
                   res+=1LL*taken*1LL*taken;
                   sum-=taken;
                   y--;
                  
             }
             
     }
     printf("%lld\n",res);
     
    
     return 0;
}

