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

char c[6105];

static int arr[2][6105];//linear spcace

                        
int max(int a,int b)
{
    return a>b?a:b;
}      
    
int main()
{
    
     int n;
     scanf("%d",&n);
     while(n--)
     {
               scanf("%s",c);
               int l = strlen(c);
               int result=0;
               memset(arr,0,sizeof(arr));
               int dd = strlen(c);
               
               
               
               
               for(int i=0;i<=l;i++)
               {
                       arr[0][i]=0;
               }
               
               for(int i=1;i<=l;i++)
               {
                     arr[1][0]=0;
                     for(int j=1;j<=l;j++)
                     { 
                           if(c[i-1]==c[dd-j])
                           {
                                   arr[1][j]=arr[0][j-1]+1;
                           }
                           else
                           {
                                   arr[1][j]=max(arr[0][j],arr[1][j-1]);
                           }
                     }
                     for(int j=0;j<=l;j++)//copy elemnts back to row 0 for next row computation
                     { 
                             arr[0][j]=arr[1][j];
                     }
                     
               }
               int ans= l-arr[1][l];
               printf("%d\n",ans);
     }
 
     return 0;
}



