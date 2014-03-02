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
    
    int a;
    cin>>a;
    while(a--)
    {
              string s;
              cin>>s;
              int flag=1;
              int y=s.length();
              for(int i=0;i<y;i++)
              {
                      for(int j=1;j<=y;j++)
                      {
                              string b = s.substr(i,j);
                              
                              int d=b.length();
                              for(int k=0,l=d-1;k<=l;k++,l--)
                              {
                                      char f=b[k];
                                      b[k]=b[l];
                                      b[l]=f;
                              }
                              
                              size_t found = s.find(b);
                              if(found==string::npos)
                              {
                                   cout<<"NO\n";
                                   flag=0;
                                   break;
                              }
                      }
                      if(!flag)
                         break;
              }
              if(flag)
                 cout<<"YES\n";
     }
    
    
     return 0;
}

