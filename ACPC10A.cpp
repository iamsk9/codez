#include<iostream>
using namespace std;
int main()
{
    long int a,b,c;
    while(1)
    {
            cin>>a>>b>>c;
            if(a==0&&b==0&&c==0)
            {break;}
            else if(b-a==c-b)
            {
                 cout<<"AP"<<" "<<(b-a)+c<<endl;
            }
            else if(b/a==c/b)
            {   
                 cout<<"GP"<<" "<<(b/a)*c<<endl;
            }
    }
    return 0;
}
