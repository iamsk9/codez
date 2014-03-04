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
int arr[101][101];
int flag[101];
int r,c;
 
inline void fast(int &x) 
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
 
    for(;((c<48 || c>57) && c != '-');c = getchar_unlocked());
    
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
}
 
     
     
 
int main()
{
    int n;
    fast(n);
    while(n--)
    {
          
              fast(r);fast(c);
              
              for(int i=1;i<=r;i++)
              {
                      for(int j=1;j<=c;j++)
                      {
                              fast(arr[i][j]);
                      }
              }
              
              memset(flag,0,sizeof(flag));
     int cnt=0;
     for(int i=1;i<=r;i++)
     {
               for(int j=1;j<=c;j++)
               {
                       if(!flag[arr[i][j]] && arr[i][j]!=-1)
                       {
                                      if(i+1<=r && arr[i+1][j]==arr[i][j])
                                      {
                                                flag[arr[i][j]]=1;
                                                cnt++;
                                      }
                                      else if(i-1>=1 && arr[i-1][j]==arr[i][j])
                                      {
                                                flag[arr[i][j]]=1;
                                                cnt++;
                                      }
                                      else if(j-1>=1 && arr[i][j-1]==arr[i][j])
                                      {
                                                flag[arr[i][j]]=1;
                                                cnt++;
                                      }
                                      else if(j+1<=c && arr[i][j+1]==arr[i][j])
                                      {
                                                flag[arr[i][j]]=1;
                                                cnt++;
                                      }
                                      else if(i+1<=r && j-1>=1 && arr[i+1][j-1]==arr[i][j])
                                      {
                                                flag[arr[i][j]]=1;
                                                cnt++;
                                      }
                                      else if(i-1>=1 && j-1>=1 && arr[i-1][j-1]==arr[i][j])
                                      {
                                                flag[arr[i][j]]=1;
                                                cnt++;
                                      }
                                      else if(i+1<=r && j+1<=c && arr[i+1][j+1]==arr[i][j])
                                      {
                                                flag[arr[i][j]]=1;
                                                cnt++;
                                      }
                                      else if(i-1>=1 && j+1<=c && arr[i-1][j+1]==arr[i][j])
                                      {
                                                flag[arr[i][j]]=1;
                                                cnt++;
                                      }
                       }
               }
     }
     printf("%d\n",cnt);
    }
   
    return 0;
}
