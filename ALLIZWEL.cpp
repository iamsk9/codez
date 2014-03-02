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
char arr[101][101];
int r,c;
char alpha[12]="ALLIZZWELL";
int flag[101][101];

int dfs(int x,int y,int z) 
{
    
                             if(z==9)
                                return 1;
    
                             flag[x][y]=1;
                             
                   
                             if (y+1<c && !flag[x][y+1] && arr[x][y+1] == alpha[z+1]) 
                             {
                                  if( dfs(x,y+1,z+1))
                                      return 1;
                                  
                             }
                             
                             if (y-1>=0 && !flag[x][y-1] && arr[x][y-1] == alpha[z+1]) 
                             {
                                   if( dfs(x,y-1,z+1))
                                       return 1;
                             }  
                             
                             if (x+1<r && !flag[x+1][y] && arr[x+1][y] == alpha[z+1]) 
                             {
                                   if( dfs(x+1,y,z+1))
                                       return 1;
                             }    
                             
                             if (x-1>=0 && !flag[x-1][y] && arr[x-1][y] == alpha[z+1]) 
                             {
                                   if( dfs(x-1,y,z+1))
                                       return 1;
                             }  
                             
                             if (x+1<r && y+1<c && !flag[x+1][y+1] && arr[x+1][y+1] == alpha[z+1]) 
                             {
                                   if( dfs(x+1,y+1,z+1))
                                       return 1;
                             }
                             
                             if (x+1<r && y-1>=0 && !flag[x+1][y-1] && arr[x+1][y-1] == alpha[z+1]) 
                             {
                                   if( dfs(x+1,y-1,z+1))
                                       return 1;
                             }
                             
                             if (x-1>=0 && y-1>=0 && !flag[x-1][y-1] && arr[x-1][y-1] == alpha[z+1]) 
                             {
                                   if( dfs(x-1,y-1,z+1))
                                       return 1;
                             }
                             
                             if (x-1>=0 && y+1<c && !flag[x-1][y+1] && arr[x-1][y+1] == alpha[z+1]) 
                             {
                                   if( dfs(x-1,y+1,z+1))
                                       return 1;
                             }
                            
                    
                             flag[x][y]=0;
                             return 0;
    
}






int main()
{

      
      int a[101][101];
      
      int n;
      scanf("%d",&n);
      while(n--)
      {
                                scanf("%d%d",&r,&c);
                                memset(flag,0,sizeof(flag));
                                for(int i=0;i<r;i++)
                                {
                                        for(int j=0;j<c;j++)
                                        {
                                                a[i][j]=0;
                                        }
                                }
                                getchar();
                                char ch;
                                for(int i=0;i<r;i++)
                                {
                                        for(int j=0;j<c;j++)
                                        {
                                               scanf("%c",&ch);
                                               if(ch=='A')
                                                  a[i][j]=1;
                                               arr[i][j]=ch;
                                                               
                                        }
                                        getchar();
                                }
                                
                               /* for(int i=0;i<r;i++)
                                {
                                        for(int j=0;j<c;j++)
                                        {
                                                cout<<a[i][j]<<" ";
                                        }
                                        cout<<endl;
                                }
                                cout<<endl;
                                for(int i=0;i<r;i++)
                                {
                                        for(int j=0;j<c;j++)
                                        {
                                                cout<<arr[i][j]<<" ";
                                        }
                                        cout<<endl;
                                }*/
                                int ans=0;
                                for(int i=0;i<r;i++)
                                {
                                        for(int j=0;j<c;j++)
                                        {
                                                  if(a[i][j]==1)
                                                  {
                                                    ans = dfs(i,j,0);
                                                    if(ans)
                                                       break;
                                                  }
                                        }
                                        if(ans)
                                           break;
                                }
                                if(ans)
                                      printf("YES\n");
                                else
                                      printf("NO\n");
                              
                               
      }
      
      return 0;
}


