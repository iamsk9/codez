#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
        char a[1002];
        char b[1002];
        while(cin>>a>>b)
        {
                        int arr[128];
                        int arr1[128];
                        memset(arr,0,sizeof(arr));
                        memset(arr1,0,sizeof(arr1));
                        int x = strlen(a);
                        int y= strlen(b);
                        for(int i=0 ;i<x;i++ )
                        {
                                arr[a[i]]++;
                        }
                        for(int i=0 ;i<y;i++ )
                        {
                                arr1[b[i]]++;
                        }
                       
                        int d;
                        for(int i=97 ;i<=122;i++)
                        {
                                if(arr[i]>=1 && arr1[i]>=1)
                                {
                                      d = min(arr[i],arr1[i]);
                                      for(int j=0;j<d;j++)
                                      {
                                          printf("%c",(char)i);
                                      }
                                }
                        }
                        cout<<endl;
        }
        return 0;
}
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                                

