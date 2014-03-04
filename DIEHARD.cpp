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
     int n;
     cin>>n;
     int airh=3,aira=2;
     int waterh=-5,watera=-10;
     int fireh=-20,firea=5;
     while(n--)
     {
               int h,a;
               cin>>h>>a;
               int count=0;
               int sign=1;
               int h1=h+airh;
               int a1=a+aira;
               while(1)
               {
                       int flag=0;
                       if(sign==1)
                       {
                             if((h1+waterh<=0||a1+watera<=0)&&(h1+fireh<=0))
                             {
                                  flag=1;
                                  count++;
                             }
                             else if((h1+waterh>0 && a1+watera>0)&&(h1+fireh<=0))
                             {
                                   h1=h1+waterh;
                                   a1=a1+watera;
                                   sign=2;
                                   count++;
                             }
                             else if((h1+waterh<=0||a1+watera<=0)&&(h1+fireh>0))
                             {
                                   h1=h1+fireh;
                                   a1=a1+firea;
                                   sign=3;
                                   count++;
                             } 
                             else
                             {
                                  if(h1+waterh>h1+fireh)
                                  {
                                              h1=h1+waterh;
                                              a1=a1+watera;
                                              sign=2;
                                              count++;     
                                  }     
                                  else if(h1+fireh>h1+waterh)
                                  {
                                       h1=h1+fireh;
                                       a1=a1+firea;
                                       sign=3;
                                       count++;
                                  }
                                  else
                                  {
                                       if(a1+watera>a1+firea)
                                       {
                                                  h1=h1+waterh;
                                                  a1=a1+watera;
                                                  sign=2;
                                                  count++; 
                                       }
                                       else if(a1+firea>a1+watera)  
                                       {
                                                 h1=h1+fireh;
                                                 a1=a1+firea;
                                                 sign=3;
                                                 count++;     
                                       }
                                       else
                                       {
                                                  h1=h1+waterh;
                                                  a1=a1+watera;
                                                  sign=2;
                                                  count++;
                                       }
                                       
                                  }
                             }
                       }
                       else if(sign==2)
                       {
                             h1=h1+airh;
                             a1=a1+aira;
                             sign=1;
                             count++;
                       }
                       else
                       {
                             h1=h1+airh;
                             a1=a1+aira;
                             sign=1;
                             count++;
                             
                       }
                       if(flag)
                          break;
               }
               cout<<count<<endl;
     }                  
                                  
     
     return 0;
}

