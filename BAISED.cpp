#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

inline void fast(int *a)

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
    int x;
    fast(&x);
    while(x--)
    {
              int a,b;
              vector<int>v;
              fast(&a);
              for(long int i=0;i<a;i++)
              {
                   char s1[1000];
                   scanf("%s",s1);fast(&b);
                   v.push_back(b);
              }
              sort(v.begin(),v.end());
              long long int re=0;
              for(int i=0;i<v.size();i++)
              { 
                      re+=abs((i+1)-v[i]);
              }
              printf("%lld\n",re);
    }
    return 0;
}




