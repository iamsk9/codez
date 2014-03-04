#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main()
{
        map<string,int> m;
        
        string aux;
 
        int n,mm,k;
        while(1)
        {
                scanf("%d%d",&n,&mm);
                vector<int> v(20001);
                if((n==0) && (mm==0))
                {
                   break;
                }
                for(k=0;k<n;k++)
                {
                  cin>>aux;
                  if(m.find(aux)!=m.end())
                  {
                        m[aux]++;
                        v[m[aux]-1]--;
                        v[m[aux]]++;
                  }
                  else
                  {
                        m[aux]=0;
                        v[0]++;
                  }
                           
                }
                
                for(k=0;k<n;k++)
                {
                   printf("%d\n",v[k]);
                }
                m.clear();
                v.clear();
         }
        return 0;
}

