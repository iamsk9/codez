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
unsigned long long arr[5002];
int flag[5002];
int main()
{
    
    int n;
    cin>>n;
    long long int ans=0;
    memset(flag,0,sizeof(flag));
    for(int i=0;i<n;i++)
          cin>>arr[i];
   
    for(int i=1;i<n;i++)
    {
            if(!flag[i])
            {
               flag[i]=1;
               int d=arr[i]-1;
               ans++;
               int last=arr[i];
               for(int j=i+1;j<n;j++)
               {
                    if(last+d==arr[j])
                    {
                                        flag[j]=1;
                                        last=arr[j];
                    }
               }
           }
    }
    
    printf("%lld\n",ans);
     
    return 0;
}

