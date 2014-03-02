#include<iostream>
using namespace std;
long long int rev(long long int n)
{
    int z;
    long long int x=0;
    while (n>0)
    {
          z=n%10;
          x=x*10+z;
          n=n/10;
    }
    return(x);
}
int main()
{
    long long int a,b;
    int c;
    cin>>c;
    while(c)
    {
               cin>>a>>b;
               cout<<(rev(rev(a)+rev(b)))<<endl;
               c--;
    } 
    return 0;
}  
