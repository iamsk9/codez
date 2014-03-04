#include<iostream>
#include<cmath>
using namespace std;
long long int f(long long int n1,long long int n2)
{
    if(n2==0)
    {
             return n1;
    }
    else
    {
        return f(n2,n1%n2);
    }
}
int main()
{
    long int x;
    scanf("%ld",&x);
    while(x--)
    {
            long long int n1,n2,c,co=0;
            scanf("%lld%lld",&n1,&n2);
            c=f(n1,n2);
            for (int i=1;i<=sqrt(c);i++)
            {
               if(c%i==0)
                  {
                            if((c/i)!=i)
                            {
                                co=co+2;
                            }
                            else if((c/i)==i)
                            {
                                 co=co+1;
                            }
                  }
            }
            printf("%lld\n",co);
    }
    return 0;
}
