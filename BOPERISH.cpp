#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long int a;
    while(scanf("%d",&a))
    {
                         vector<long int> s;
                         if(a==0)
                         {
                                 break;
                         }
                         for(int i=0;i<a;i++)
                         {
                                     long int b;
                                     cin>>b;
                                     s.push_back(b); 
                         }
                         sort(s.begin(),s.end(),greater<long int>());
                         int h=0;
                         while(s[h]>=h+1)
                         {
                                         h++;
                         }
                         cout<<h<<endl;
                         
    }
    return 0;
}

