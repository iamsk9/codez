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

int main()
{

        string s;
        while(1)
        {
                  cin>>s;
                  int len=s.size();
                  if(s[0]=='B')
                     break;
                  string a1="010",a2="093",a3="079",a4="106",a5="103",a6="119",a7="011",a8="127",a9="107",a0="063";
                  
                  int i=0;
                  ll x=0,y=0;
                  ll sum=0;
                  while(1)
                  {
                         if(s[i]=='+')
                           break;
                         string v= s.substr(i,3);
                         if(!v.compare(a1))
                             x=10*x+1;
                         else if(!v.compare(a2))
                             x=10*x+2;
                         else if(!v.compare(a3))
                             x=10*x+3;
                         else if(!v.compare(a4))
                             x=10*x+4;
                         else if(!v.compare(a5))
                             x=10*x+5;
                         else if(!v.compare(a6))
                             x=10*x+6;
                         else if(!v.compare(a7))
                             x=10*x+7;
                         else if(!v.compare(a8))
                             x=10*x+8;
                         else if(!v.compare(a9))
                             x=10*x+9;
                         else if(!v.compare(a0))
                             x=10*x+0;
                         
                         i=i+3;
                  }
                  
                  i++;
                  while(i<len)
                  {
                         string v= s.substr(i,3);
                         if(!v.compare(a1))
                             y=10*y+1;
                         else if(!v.compare(a2))
                             y=10*y+2;
                         else if(!v.compare(a3))
                             y=10*y+3;
                         else if(!v.compare(a4))
                             y=10*y+4;
                         else if(!v.compare(a5))
                             y=10*y+5;
                         else if(!v.compare(a6))
                             y=10*y+6;
                         else if(!v.compare(a7))
                             y=10*y+7;
                         else if(!v.compare(a8))
                             y=10*y+8;
                         else if(!v.compare(a9))
                             y=10*y+9;
                         else if(!v.compare(a0))
                             y=10*y+0;
                         
                         i=i+3;   
                  }
                  sum=x+y;
                  vector<int>v;
                  while(sum>0)
                  {
                            int rem=sum%10;
                            v.push_back(rem);
                            sum/=10;
                  }  
                  string ans="";
                  
                  for(int i=v.size()-1;i>=0;i--)
                  {
                          if(v[i]==0)
                            ans+="063";
                          else if(v[i]==1)
                            ans+="010";
                          else if(v[i]==2)
                            ans+="093";
                          else if(v[i]==3)
                            ans+="079";
                          else if(v[i]==4)
                            ans+="106";
                          else if(v[i]==5)
                            ans+="103";
                          else if(v[i]==6)
                            ans+="119";
                          else if(v[i]==7)
                            ans+="011";
                          else if(v[i]==8)
                            ans+="127";
                          else if(v[i]==9)
                            ans+="107";
                  }
                  
                  cout<<s<<ans<<endl;
        }
        
                            
       
        return 0;
}

