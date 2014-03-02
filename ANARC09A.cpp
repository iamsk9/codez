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

int main()
{
    
    char c[2002];
    int co=1;
    while(1)
    {
            stack<int>s;
            scanf("%s",c);
            if(c[0]=='-')
            {
                         break;
            }
            int i=0;
            int count=0;
            while(c[i]!='\0')
            {
                    if(c[i]=='}' && s.empty())
                             count++;
                    else if(c[i]=='}' )
                    {
                         s.pop();
                    }
                    else
                    {
                        s.push(1);
                    }
                    i++;
            }
            if(count%2!=0)
            {
                  int ans=count/2+1 + s.size()/2+1;
                  printf("%d. %d\n",co,ans);
            }
            else
            {
                  int ans=count/2 + s.size()/2;
                  printf("%d. %d\n",co,ans);
            }
            co++;
    }
   
    return 0;
}

