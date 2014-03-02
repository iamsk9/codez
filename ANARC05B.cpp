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
int arr1[100003];
int arr2[100003];

ll max(ll a,ll b)
{
          return a>b?a:b;
}
int main()
{
       
         while(1)
         {
                 int a,b;
                 scanf("%d",&a);
                 if(a==0)
                    break;
                 memset(arr1,0,sizeof(arr1));
                 memset(arr2,0,sizeof(arr2));
                 for(int i=0;i<a;i++)
                 {
                         scanf("%d",&arr1[i]);
                 }
                 scanf("%d",&b);
                 for(int i=0;i<b;i++)
                 {
                         scanf("%d",&arr2[i]);
                 }
                 
                 int i=0,j=0;
                 ll sum1=0;
                 ll sum2=0;
                 ll ans=0;
                 sum1=arr1[0];
                 sum2=arr2[0];
                 while(i<a && j<b)
                 {
                          if(arr1[i]<arr2[j])
                          {
                                   sum1+=arr1[i+1];
                                   i++;
                          } 
                          else if(arr1[i]>arr2[j])
                          {
                                   sum2+=arr2[j+1];
                                   j++;
                          } 
                          else
                          {
                              ans+=max(sum1,sum2);
                              sum1=arr1[i+1];
                              sum2=arr2[j+1];
                              i++;
                              j++;
                          }
                 }
                 
                 while(i<a)
                 {
                           sum1+=arr1[i+1];
                           i++;
                 }
                 
                 while(j<b)
                 {
                           sum2+=arr2[j+1];
                           j++;
                 }
                 
                 ans+=max(sum1,sum2);
                 printf("%lld\n",ans);
         }
      
         return 0;
}

