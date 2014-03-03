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
char c[1000006];
int arr[300];

l max(l a,l b)
{
        return a>b?a:b;
}

int main()
{

       int t;
       while(1)
       {
                            memset(arr,0,sizeof(arr));
                            scanf("%d",&t);
                            getchar();
                            
                            if(!t)
                               break;
                               
                            
                            
                            gets(c);
                            int u=0;
                            long i=0,j=0,best=0;
                            for(int j=0;c[j];j++)
                            {
                                    if(!arr[c[j]])
                                    {
                                               u++;
                                    }
                                    
                                    if(u>t)
                                    {
                                                  while(--arr[c[i++]]);
                                                  u=t;
                                    }
                                    arr[c[j]]++;
                                    best=max(best,j-i+1);
                            }
                            printf("%ld\n",best);
                                    
                                    
                                    
       }
    
       return 0;
}


