#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>


typedef long long ll;
typedef long l;

using namespace std;
const double pi = acos(-1.0);

const int MAX= 10000;
int dv[MAX];

int arr[MAX];
int in=1;


void pre()
{
    
    dv[2]=1;
    for(int i=4;i<MAX;i+=2)
            dv[i]++;
    for(int i=3;i<MAX;i+=2)
    {
            if(!dv[i])
            {
                dv[i]=1;
                for(int j=i*2;j<MAX;j+=i)
                {
                         dv[j]++;
                }
            }
    }
    for(int i=1;i<MAX;i++)
    {
            
            if(dv[i]>=3)
            {
                                   arr[in]=i;
                                   in++;
            }
            
    }
}
                         


int main()
{
      
       int t;
       pre();
       scanf("%d",&t);
       while(t--)
       {       int a;
               scanf("%d",&a);
               printf("%d\n",arr[a]);
       }
       return 0;
}

























