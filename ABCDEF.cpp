#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int x;
    int z,z1;
    scanf("%d",&x);
    int a[101];
    vector<int>v,v1;
    for(int i=0;i<x;i++)
    {
            scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++)
    {
            for(int j=0;j<x;j++)
            {
                    for(int k=0;k<x;k++)
                    {
                          z=a[i]*a[j]+a[k];
                          v.push_back(z);
                          if(!a[i])
                          {
                                   continue;
                          }
                          z1=a[i]*(a[j]+a[k]);
                          v1.push_back(z1);
                    }
            }
    }
    int c=0;
    pair<vector<int>::iterator, vector<int>::iterator> bounds, bounds2;
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    for(int i=0;i<v.size();i++)
    {
            bounds = equal_range(v.begin(), v.end(), v[i]);
            bounds2 = equal_range(v1.begin(), v1.end(), v[i]);
            c += int(bounds.second - bounds.first)
                * int(bounds2.second - bounds2.first);
            i += int(bounds.second - bounds.first) - 1;
    }
    printf("%d\n",c);
    return 0;
}
    
                                      
            
            
    

