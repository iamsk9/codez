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

int arr[103];
int point[55];
char c[5000];
#define T(x) strtok(x, " \n\r\t")

int main()
{

       int n;
       for(int i=0;i<=4;i++)
       {
               point[i]=1;
       }
       point[5]=2;
       point[6]=3;
       point[7]=5;
       for(int i=8;i<55;i++)
       {
               point[i]=11;
       }
       
       scanf("%d",&n);
       getchar();
       vector<pair<string,int> >v;
       vector<pair<string,int> >::iterator t,y,u;
       memset(arr,0,sizeof(arr));
       for(int i=1;i<=n;i++)
       {
              
               gets(c);      
               for(char *p = T(c); p != NULL; p = T(NULL))
               {
                        string s(p);
                        v.push_back(pair<string,int>(s,i));
                        
               }
       }
       sort(v.begin(),v.end());
       int s=0;
       for(t=v.begin();t!=v.end();t++)
       {
             if(s==0)
             {
                     u=t+1;
                     string a=u->first;
                     string h=t->first;
                     if(a.compare(h)!=0)
                     {
                         int s=h.size();
                         arr[t->second]+=point[s];
                     }
                     s=1;
             }
             else if(t+1==v.end())
             {
                     y=t-1;
                     string a=y->first;
                     string h=t->first;
                     if(a.compare(h)!=0)
                     {
                         int s=h.size();
                         arr[t->second]+=point[s];
                     }
             }
             else
             {
                     y=t-1;
                     u=t+1;
                     string a=y->first;
                     string h=t->first;
                     string g=u->first;
                     if(a.compare(h)!=0 && g.compare(h)!=0)
                     {
                         int s=h.size();
                         arr[t->second]+=point[s];
                     }
             }
       }
       int max=0;
       for(int i=1;i<=n;i++)
       {
               if(arr[i]>max)
                  max=arr[i];
       } 
       printf("%d\n",max);   
  
       return 0;
}

