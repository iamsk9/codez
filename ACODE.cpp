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
long arr[5004];

int main()
{

     char c[5003];
     while(1)
     {
                        scanf("%s",c);
                        if(c[0]=='0') 
                           break;
                        memset(arr,0,sizeof(arr));
                        arr[0]=1;
                        int index=1;
                        int l=strlen(c);
                        while(index<=l)
                        {
                                       int a=c[index-1]-'0';
                                       if(a>=1 && a<=9)
                                           arr[index]=arr[index-1];
                                       if(index>1)
                                       {
                                                  int b = c[index-2]-'0';
                                                  if((b ==1 && (a>=0 && a<=9))|| (b==2 && (a>=0 && a<=6)))
                                                      arr[index]+=arr[index-2];
                                       }
                                       index++;
                        }
                        printf("%ld\n",arr[l]);
     }
  
     return 0;
} 

