#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
    
    int a;
    char c[100005];
    char c1[100005];
    cin>>a;
    cin>>c;
    int y=strlen(c);
    int j=0;
    for(int i=0;i<y;i=i+2)
    {
          char p,q;
          if(c[i]!='A'&& c[i+1]!='A')
                  p='A';
          else if(c[i]!='B'&& c[i+1]!='B')
                  p='B';
          else if(c[i]!='C'&& c[i+1]!='C')
                  p='C';
          else if(c[i]!='D'&& c[i+1]!='D')
                  p='D';
                  
          if(c[i]!='A'&& c[i+1]!='A' && p!='A')
                  q='A';
          else if(c[i]!='B'&& c[i+1]!='B' && p!='B')
                  q='B';
          else if(c[i]!='C'&& c[i+1]!='C' && p!='C')
                  q='C';
          else if(c[i]!='D'&& c[i+1]!='D' && p!='D')
                  q='D';
                  
          if(i>0)
          {
                 if(c1[j-1]==p)
                 {
                      c1[j++]=q;
                      c1[j++]=p;
                 }
                 else if(c1[j-1]==q)
                 {
                      c1[j++]=p;
                      c1[j++]=q;
                 }
                 else
                 {
                      c1[j++]=p;
                      c1[j++]=q;
                 }
          }
          else
          {
                 c1[j++]=p;
                 c1[j++]=q;
          }
                      
                 
    }
    c1[j]='\0';
    puts(c1);
    
    return 0;
}

