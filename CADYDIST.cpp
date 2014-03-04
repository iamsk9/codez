#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    long long  int x;
    while(scanf("%lld",&x))
    {
                          if(x==0)
                          {
                                  break;
                          }
                          vector<long long int> l,l2;
                          for(int i=0;i<x;i++)
                          {
                              long long int z;
                              scanf("%lld",&z);
                              l.push_back(z);
                          }
                          sort(l.begin(), l.end() );
                          for(int i=0;i<x;i++)
                          {
                              long long int z;
                              scanf("%lld",&z);
                              l2.push_back(z);
                          }
                          sort(l2.begin(), l2.end(),greater<long long int>() );
                          long long int s=0;
                          for(int i=0;i<x;i++)
                          {
                                  s=s+l[i]*l2[i];
                          }
                          printf("%lld\n",s);
    }
   
    return 0;
}
                          
                          
                          
                          
                          
                          
                          
                          
                          
                          

