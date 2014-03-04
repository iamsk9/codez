#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
              vector<int> x,y;
              int w,h,n,t=0,t1=0,t2=0,t3=0;
              cin>>w>>h>>n;
              for(int i=0;i<n;i++)
              {
                      int p,q;
                      cin>>p>>q;
                      if(p==w)
                      {  
                              t=1;
                      }
                      if(p==1)
                      {  
                              t2=1;
                      }
                      if(q==h)
                      {  
                              t1=1;
                      }
                      if(q==1)
                      {  
                              t3=1;
                      }
                      x.push_back(p);
                      y.push_back(q);
              }
              if(t==0)
              {
                  x.push_back(w+1);
              }
              if(t2==0)
              {
                  x.push_back(0);
              }
              if(t3==0)
              {
                  y.push_back(0);
              }
              if(t1==0)
              {
                  y.push_back(h+1);
              }
              sort(x.begin(),x.end());
              sort(y.begin(),y.end());
              int max=0,max1=0,r=0,r1=0;
              for(int i=1;i<x.size();i++)
              {
                      r=x[i]-x[i-1]-1;
                      if(r>max)
                      {
                               max=r;
                      }
                      r=0; 
              }
              for(int i=1;i<y.size();i++)
              {
                      r1=y[i]-y[i-1]-1;
                      if(r1>max1)
                      {
                               max1=r1;
                      }
                      r1=0;  
              }
              cout<<max*max1<<endl;
    }
    return 0;
}
              
              
    

