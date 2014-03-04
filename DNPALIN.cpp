#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

typedef long long ll;
typedef long l;

using namespace std;
const double pi = acos(-1.0);

/*inline void fast(int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());

    if(c=='-')
    {
        neg = 1;
        c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked())
    {
        x =(x<<1)+(x<<3) + c - 48;
    }

    if(neg)
        x = -x;
}   */

int main()
{
       string s;
       while(1)
       {
               cin>>s;
               if(s[0]=='*')
                  break;
               
               int len=s.length();
               int flag1,flag2;
               int f1=0,f2=0;
               for(int i=0;i<len-1;i++)
               {
                       flag1=1,flag2=1;
                       f1=1,f2=1;
                       string a=s.substr(0,i+1);
                       string b=s.substr(i+1,len-i+1);
                    
                       
                       int l1=a.length();
                       int l2=b.length();     
                       
                       
                       for(int j=0;j<l1/2;j++)
                       {
                               if(a[j]!=a[l1-j-1])
                               {
                                   flag1=0;
                                   break;
                               }
                       
                       }
                       for(int j=0;j<l2/2;j++)
                       {
                               if(b[j]!=b[l2-j-1])
                               {
                                   flag2=0;
                                   break;
                               }
                          
                       }

                       
                       if(flag1==1 && l1%2==1)
                       {
                                 f1=1;
                                 if(flag2==1 && l2%2!=1)
                                 {
                                      f2=0;
                                 }
                                 else if(flag2==0)
                                 {
                                      int cnt=0;
                                        for(int j=0;j<l2/2;j++)
                                        {
                                           if(b[j]!=b[l2-j-1])
                                           {
                                                    cnt++;
                       
                                           }
                                        }
                                        if(cnt>1)
                                           f2=0;
                                        
                                 }
                                 
                       }
                       else if(flag1==1 && l1%2!=1)
                       {
                            f1=0;
                       }
                       else if(flag1==0)
                       {
                                        int cnt=0;
                                        for(int j=0;j<l1/2;j++)
                                        {
                                           if(a[j]!=a[l1-j-1])
                                           {
                                                    cnt++;
                       
                                           }
                                        }
                                        if(cnt>1)
                                           f1=0;
                                        
                                        if(f1==1)
                                        {
                                                if(flag2==1 && l2%2!=1)
                                                {
                                                      f2=0;
                                                }
                                                else if(flag2==0)
                                                {
                                                        cnt=0;
                                                        for(int j=0;j<l2/2;j++)
                                                        {
                                                              if(b[j]!=b[l2-j-1])
                                                              {
                                                                     cnt++;
                       
                                                              }
                                                        }
                                                        if(cnt>1)
                                                            f2=0;
                                                }
                                         }
                                        
                       } 
                       
                                 
                       if(f1 && f2)
                       {
                           cout<<s<<" is a double near palindrome.\n";
                           break;
                       }
               }
               if(!f1 || !f2)
                    cout<<s<<" is not a double near palindrome.\n";
       }
     
       return 0;
}

