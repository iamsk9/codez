#include<iostream>
using namespace std;
int main()
{
      long long int th,thl,sum,n;
      int x,a,d;
      cin>>x;
      while(x--)
      {
                cin>>th>>thl>>sum;
                n=(2*sum)/(th+thl);
                d=(thl-th)/(n-5);
                a=th-2*d;
                cout<<n<<endl;
                cout<<a;
                for(int i=1;i<n;i++)
                {
                        cout<<" ";
                        cout<<a+i*d;
                }
                cout<<endl;
      }
      return 0;
}
