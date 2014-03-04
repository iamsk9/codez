#include<iostream>
using namespace std;
int main()
{
    long long int a,b,y,l;
    long long int x;
    cin>>x;
    while(x)
    {
            cout<<endl;
            cin>>y;
            l=y;
            b=0;
            while(y)
            {

                    cin>>a;
                    b=(b+a)%l;
                    y--;
            }
            if(b==0)
            {
                      cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            x--;
    }
    return 0;
}
            

