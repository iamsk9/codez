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

l arr[100005];

inline void fast(long int *a)

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

int main()
{
    
    long t;
    fast(&t);
    while(t--)
    {
              l a,b;
              int x=1,y=1;
              
              fast(&a);fast(&b);
              
              ll best=0;
              ll ppl=0;
              for(int i=1;i<=a;i++)
              {
                   fast(&arr[i]);
              }  
              ll curr=arr[1];
             
              while(x<=a)
              {
                         if(curr<=b && best <= y-x+1)
                         { 
                                    if(best==(y-x+1))
                                    { 
                                         if(curr<ppl)
                                               ppl=curr;
                                    }
                                    else
                                    {
                                           best=y-x+1;
                                           ppl=curr;
                                    }
                         }
                         
                         if(curr<=b && y<a)
                         {
                               curr+=arr[y+1];
                               y++;
                         }
                         else
                         {
                              curr-=arr[x];
                              x++;
                              
                         }
              } 
             printf("%lld %lld\n",ppl,best);
    }   
              
               return 0;
}

