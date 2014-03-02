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

int arr[1000002][1];//0 for indegree// tounamnt graph

int main()
{
      int n1;
      scanf("%d",&n1);
      while(n1--)
      {
                memset(arr,0,sizeof(arr));
                l n,m;
                scanf("%ld%ld",&n,&m);
                for(int i=1;i<=n;i++)
                {
                        arr[i][0]=n-i;
                       
                }
                
                for(int i=0;i<m;i++)
                {
                        long int x,y;
                        scanf("%ld%ld",&x,&y);
                        arr[x][0]--;
                        arr[y][0]++;
                }
                long int ans=0;
                for(int i=n;i>=1;i--)
                {
                        if(arr[i][0]==0)
                        {
                            ans=i;
                            break;
                        }
                }
                
                if(!ans)
                   printf("1\n");
                else
                   printf("2 %ld\n",ans);
      }
      
      
      return 0;
}

