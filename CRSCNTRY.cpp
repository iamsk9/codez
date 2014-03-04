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
 
int girl[2002]={0};
int arr[2002][2002];
int tom[2002]={0};
 
 
inline void fast(int *a)
 
{
       register char c=0;
       while (c<33) c=getchar_unlocked();
       *a=0;
       while (c>33)
       {
            *a=*a*10+c-'0';
             c=getchar_unlocked();
       }
}
 
int max(int a,int b)
{
    return a>b?a:b;
}
int lcs(int x,int y)
{
    
      for(int i=0;i<x;i++)
      {
              arr[i][0]=0;
      }
      for(int j=0;j<y;j++)
      {
              arr[0][j]=0;
      }
      
      for(int i=0;i<x;i++)
      {
              for(int j=0;j<y;j++)
              {
                     if(girl[i]==tom[j]) 
                        arr[i+1][j+1]=arr[i][j]+1;
                     else
                        arr[i+1][j+1]=max(arr[i+1][j],arr[i][j+1]);
              }
      } 
      return arr[x][y];
}
              
 
int main()
{
    int t,tm;
    fast(&t);
    while(t--)
    {
              int max=0;
              int i=0;
              int j=0;
              while(1)
              {
                  fast(&tm);
                  if(tm==0)
                     break;
                  girl[i++]=tm;
              }
              
              while(1)
              {
                   fast(&tm);
                   if(tm==0)
                     break;
                   else
                   {
                       j=0;
                       tom[j++]=tm;
                       while(1)
                       {
                           fast(&tm);
                           if(tm==0)
                             break;
                           tom[j++]=tm;
                       }
                       int ans = lcs(i,j);
                       if(ans>max)
                         max=ans;
                   }
              }
              printf("%d\n",max);
              
    }         
    
    return 0;
}
