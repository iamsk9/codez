#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int arr[3005];
bool flag[34000]={0};
int main()
{
       
        for(int j=2,i=1;i<3005;j++,i++)
        {
                while(flag[j])
                    j++;
                arr[i]=j;
                for(int x=j+1,c=0;x<=34000;x++)
                {
                        if(flag[x])
                          continue;
                        c++;
                        if(c==j)
                        {
                             flag[x]=1;
                             c=0;
                        }
                }
        }
        
        int n;
        while(scanf("%d",&n))
        {
                     if(!n)
                        break;
                     cout<<arr[n]<<endl;
        }
        return 0;
}
                
    

