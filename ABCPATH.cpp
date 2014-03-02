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

int m,n,ans=0;

int bfs(int arr[][52],int x,int y) 
{
    int len[27];
    for(int i=0;i<27;i++)
        len[i]=1;
        
    int flag[50][50];
    for(int i=0;i<m;i++)
    {
         for(int j=0;j<n;j++)
         {
                 flag[i][j]=0;
         }
    }
    
    queue<pair<int,int> >q;
    q.push(pair<int,int>(x,y));
    
    int prev,next;
    
    while(!q.empty())
    {
                     int a= q.front().first;
                     int b= q.front().second;
                     q.pop();
                     
                     prev = arr[a][b];
                     
                     if(!flag[a][b])
                     {
                             flag[a][b]=1;
                             
              	             if (b+1<n && arr[a][b]+1 == arr[a][b+1]) 
                             {
                                  q.push(pair<int,int>(a,b+1));
                                  next = arr[a][b+1];
                                  len[next] = len[prev]+1;
                             }
                             
                             if (b-1>=0 && arr[a][b]+1 == arr[a][b-1]) 
                             {
                                  q.push(pair<int,int>(a,b-1));
                                  next = arr[a][b-1];
                                  len[next] = len[prev]+1;
                             }  
                             
                             if (a+1<m && arr[a][b]+1 == arr[a+1][b]) 
                             {
                                  q.push(pair<int,int>(a+1,b));
                                  next = arr[a+1][b];
                                  len[next] = len[prev]+1;
                             }    
                             
                             if (a-1>=0 && arr[a][b]+1 == arr[a-1][b]) 
                             {
                                  q.push(pair<int,int>(a-1,b));
                                  next = arr[a-1][b];
                                  len[next] = len[prev]+1;
                             }  
                             
                             if (a+1<m && b+1<n && arr[a][b]+1 == arr[a+1][b+1]) 
                             {
                                  q.push(pair<int,int>(a+1,b+1));
                                  next = arr[a+1][b+1];
                                  len[next] = len[prev]+1;
                             }
                             
                             if (a+1<m && b-1>=0 && arr[a][b]+1 == arr[a+1][b-1]) 
                             {
                                  q.push(pair<int,int>(a+1,b-1));
                                  next = arr[a+1][b-1];
                                  len[next] = len[prev]+1;
                             }
                             
                             if (a-1>=0 && b-1>=0 && arr[a][b]+1 == arr[a-1][b-1]) 
                             {
                                  q.push(pair<int,int>(a-1,b-1));
                                  next = arr[a-1][b-1];
                                  len[next] = len[prev]+1;
                             }
                             
                             if (a-1>=0 && b+1<n && arr[a][b]+1 == arr[a-1][b+1]) 
                             {
                                  q.push(pair<int,int>(a-1,b+1));
                                  next = arr[a-1][b+1];
                                  len[next] = len[prev]+1;
                             }
                     }
    }
    sort(len,len+27);
    
    if(len[26]>ans)
          ans=len[26];
    
}






int main()
{

      int arr[52][52],a[52][52];
      char alpha[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      
      int l=1;
      while(scanf("%d%d",&m,&n))
      {
                                if(!m&&!n)
                                   break;
                                
                                for(int i=0;i<m;i++)
                                {
                                        for(int j=0;j<n;j++)
                                        {
                                                a[i][j]=0;
                                        }
                                }
                                getchar();
                                char ch;
                                for(int i=0;i<m;i++)
                                {
                                        for(int j=0;j<n;j++)
                                        {
                                               scanf("%c",&ch);
                                       	       for(int k=0;k<27;++k) 
                                               {
                                                       if (ch == alpha[k]) 
                                                       {
                                                                if (k == 0) 
                                                                {
                                                                        a[i][j] = 1;
                                                                }
                                                                arr[i][j] = k;
                                                                break;
                                                       }
                                               }
                                        }
                                        getchar();
                                }
                                
                                for(int i=0;i<m;i++)
                                {
                                        for(int j=0;j<n;j++)
                                        {
                                                  if(a[i][j]==1)
                                                     bfs(arr,i,j);
                                        }
                                }
                                
                               	printf("Case %d: %d\n",l,ans);
                                ans = 0;
                                l++;
      }
     
      return 0;
}


