#include<iostream>
#include<cmath>
#include<string.h>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#define T(x) strtok(x," \n\r\t")
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    int h=1;
    while(n--)
    {
              char c[10005];
              gets(c);
              map<char,int>m;
              map<char,int>::iterator t;
              int i=strlen(c);
              for(int j=0;j<i;j++)
              {
                      if(c[j]!=' ')
                         m[c[j]]++;
              }
            
              int max=0;
              char ch;
              for(t=m.begin();t!=m.end();t++)
              {
                      if(t->second > max)
                      {
                            max=t->second;
                            ch=t->first;
                      }
              }
              
              vector<char*>v;
              for(char *p = T(c); p != NULL; p = T(NULL))
              {
                        map<char,int>m1;
                        map<char,int>::iterator t1;
                        int len = strlen(p);
                        for(int j=0;j<len;j++)
                        {
                               m1[p[j]]++;
                        }
                      
                        
                        int max1=m1[ch];
                       
                        int flag=1;
                        for(t1=m1.begin();t1!=m1.end();t1++)
                        {
                               
                               if(t1->first!=ch && t1->second >=max1 )
                               {
                                        flag=0;
                                        break;
                               }
                        }
                        if(flag)
                            v.push_back(p);  
                        
                        
              }
              
              cout<<"Case #"<<h<<":\n";
              
              for(int i=0;i<v.size();i++)
              {
                      printf("%s\n",v[i]);
              }
              
              h++;
            
              
              
    }
    
    return 0;
}

