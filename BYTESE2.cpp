#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define pp pair<int ,int>

int main()
{
     int n;
     scanf("%d",&n);
     while(n--)
     {
          int p;
          scanf("%d",&p);
          vector<pp>v;
          for(int i=0;i<p;i++)
          {
                int x,y;
                scanf("%d%d",&x,&y);
                v.push_back(pp(x,1));
                v.push_back(pp(y,0));
         }
         sort(v.begin(),v.end());
         int ans=0;
         int m=0;
         for(int i=0;i<v.size();i++)
         {
               if(v[i].second==1)
                   ans++;
               else
                   ans--;
               m=max(ans,m);
          }
          printf("%d\n",m);
     }
     return 0;
}
          

