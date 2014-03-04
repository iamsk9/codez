#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,j;
    long long int a[100000],count,c=1;
    while(scanf("%d",&n)!=EOF)
    {
           count=0;//cout<<n;
           for(int i=0;i<n;i++)
           {
               scanf("%lld",&a[i]);
           }

           for(int i=0;i<n;i++)
           {
                 if(a[i]!=0)
                 {
                     for(j=i+1;j<n;j++)
                     {
                            if(a[j]<a[i])
                            {
                                 count++;
                                 break;
                            }
                            else if(a[j]==a[i])
                            {
                                 a[j]=0;
                            }
                     }
                     if(j==n)
                     {
                             count++;
                     }
                 }
           }
           printf("Case %lld: %lld\n",c,count);
           c++;
           //cout<<"Case "<<c<<": "<<count<<"\n";c++;
     }
return 0;
}

