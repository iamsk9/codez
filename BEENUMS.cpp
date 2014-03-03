#include<iostream>
using namespace std;
int main()
{
    
    long long int n;
    while(cin>>n)
    {
                 long long int t;
                 int k;
                 if(n==-1)
                 {
                          break;
                 }
                 k=0;
                 for(int i=1;i<=n;i++)
                 {
                         t=1+(3*i*(i-1));
                         if(t>n)
                         {
                                k=1;
                                break;
                         }
                         else
                         {
                             if(t==n)
                             {
                                     cout<<"Y"<<endl;
                                     break;
                             }
                         }
                 }
                 if(k)
                 {
                      cout<<"N"<<endl;
                 }
    }
    return 0;
}
