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
    int a,b;
    while(1)
    {
            scanf("%d%d",&a,&b);
            if(!a)
               break;
            int arr1[22];
            int arr2[22];
            for(int i=0;i<22;i++)
            {
               arr1[i]=0;
               arr2[i]=0;
            }
            for(int i=0;i<a;i++)
            {
                    int y;
                    scanf("%d",&y);
                    arr1[y]++;
            }
            for(int i=0;i<b;i++)
            {
                    int y1;
                    scanf("%d",&y1);
                    arr2[y1]++;
            }
            int ans=0;
            for(int i=1;i<22;i++)
            {
                    ans+=(max(arr1[i],arr2[i]))*i;
            }
            printf("%d\n",ans);
    }
    
   
    return 0;
}

