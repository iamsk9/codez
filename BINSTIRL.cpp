#include<iostream>
using namespace std;
int main()
{
    int x,a,b;
    cin>>x;
    while(x--)
    {
         cin>>a>>b;
         cout<<!((a-b)&((b-1)/2))<<endl;
    }
}
      

