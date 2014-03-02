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

int arr1[10001];
int arr2[10001];
int train1[10001];
int train2[10001];

int main()
{
        
        
        
     int a;
     long ppl;
     scanf("%d%ld",&a,&ppl);
     int i;
     for(i=0;i<a;i++)
     {
            scanf("%d",&arr1[i]);
     }
     for(i=0;i<a;i++)
     {
            scanf("%d",&arr2[i]);
     }

     train1[0]=arr1[0];
     train2[0]=arr2[0];

     for(i=1;i<a;i++)
     {
            train1[i]=arr1[i]+min(train1[i-1],arr2[i]+train2[i-1]);
            train2[i]=arr2[i]+min(train2[i-1],arr1[i]+train1[i-1]);
     }
     ll sum=0;
     l count=0;
     l flag=0;
     for(i=0;i<a;i++)
     {
             if(min(train1[i],train2[i])<ppl)
             {
                       sum= min(train1[i],train2[i]);
                       count++;
                       flag=1;                  
             }
             else
             {
                  flag=0;
                  printf("%d %d\n",count,sum);
                  break;
             }
                 
     }
     
     if(flag)
     {
              printf("%d %d\n",count,sum);
     }
    
   
     return 0;
}

