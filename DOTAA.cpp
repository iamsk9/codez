#include<iostream>
using namespace std;
int main()
{
    int x,h,t,d,c,f;
    cin>>x;
    while(x--)
    {
            cin>>h>>t>>d;
            int ar[h];
            c=0;
            for(int i=0;i<h;i++)
            {
                 cin>>ar[i];
                 if(ar[i]>d)
                 {   
                            while(ar[i]>d)
                            {
                                 c++;
                                 ar[i]=ar[i]-d;
                            }
                 }
            }
            if(c>=t)
            {
                    cout<<"YES"<<endl;
            }
            else
            {
                 cout<<"NO"<<endl;
            }
    }
    return 0;
}
