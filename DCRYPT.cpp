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

/*inline void fast(int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());

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
}   */

int main()
{
  
          int n;
          scanf("%d",&n);
          char c[100003];
          while(n--)
          {
                    int t;
                    scanf("%d",&t);
                    scanf("%s",c);
                    map<int,char>m;
                    map<char,int>m1;
                    int j=97,n1=97;
                    for(int i=0;i<=25;i++)
                    {
                            m[i]=j+i;
                            m1[n1++]=i;
                    }
                    int i=0;
                    int flag=0;
                    int ss=0;
                    if(t>25)
                    {
                            flag=1;
                            ss=t-26;
                    }
                    else
                       ss=t;
                    while(c[i]!='\0')
                    {
                                     
                                     char r=tolower(c[i]);
                                     int final=(ss+m1[r])%26;
                                     if(c[i]=='.')
                                        printf(" ");
                                     else if(!flag)
                                     {
                                          if(c[i]>=97)
                                             printf("%c",m[final]);
                                          else
                                             printf("%c",toupper(m[final]));
                                     }
                                     else
                                     {
                                          if(c[i]>=97)
                                             printf("%c",toupper(m[final]));
                                          else
                                             printf("%c",tolower(m[final]));
                                     }
                                     i++;
                    }
                    printf("\n");
          }
   
          return 0;
}

