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
#define T(x) strtok(x, " \n\r\t")
using namespace std;
const double pi = acos(-1.0);
char c[1000000];
char b[1000000];
int main()
{
        int n;
        scanf("%d\n",&n);
       
        while(n--)
        {
                  gets(c);
                  long long ans=0;
                  vector<long long int>v;

                  int y=0;
                  for(char *p = T(c); p != NULL; p = T(NULL))
                  {
                        long long int no=0;
                        if(p[0]=='/' ||p[0]=='*'||p[0]=='+' ||p[0]=='-')
                           b[y++]=p[0];
                        if(p[0]>='0' && p[0]<='9')
                        {
                                     int i=0;
                                     while(p[i]!='\0')
                                     {
                                                      no=no*10+p[i]-'0';
                                                      i++;
                                     }
                                     v.push_back(no);
                        }
                                     
                  }
                  
                  ans=v[0];
                  for(int i=1,ff=0;i<v.size(),ff<y;i++,ff++)
                  {
                          if(b[ff]=='/')
                             ans=ans/v[i];
                          else if(b[ff]=='*')
                             ans=ans*v[i];
                          else if(b[ff]=='-')
                             ans=ans-v[i];
                          else
                             ans=ans+v[i];
                  }
                  
                  printf("%lld\n",ans);
                  gets(c);
               
        }
       
        return 0;
}

