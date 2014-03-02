#include<iostream>
using namespace std;
long long int f(long long int n1,long long int n2)
{
    if(n1==0) 
        return n2;
	else if(n2==0) 
        return n1;
    if(n1>n2)
	    return f(n1%n2,n2);
	else
	    return f(n1,n2%n1);
	 
	return 0;
	 
}
int main()
{
    long long int a,b,c,d;
    while(1)
    {
            cin>>a>>b;
            if(a==0&&b==0)
            {
                          break;
            }
            if(a==b)
            {
                    cout<<"1"<<endl;
            }
            else if(a>b)
	        {
	             if(a%b==0)
	                 cout<<a/b<<endl;
                 else
                 {
                      c=f(a,b);
                      d=(a*b)/c;
                      cout<<d<<endl;
                 }
            }
            else if(b>a)
	        {
	             if(b%a==0)
	                 cout<<b/a<<endl;
                 else
                 {
                      c=f(a,b);
                      d=(a*b)/c;
                      cout<<d<<endl;
                 }
            }
            
    }
    return 0;
}
