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

inline void fast(int &x)
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
}   

int main()
{

        int t;
        fast(t);
        while(t--)
        {
                  int batch,numofwep,maxcost;
                  fast(batch);fast(numofwep);fast(maxcost);
                  int batchcost[22];
                  int cost[404];
                  int rating[404];
                  
                  int ans[1003];
                  int index=0;
                  for(int i=0;i<batch;i++)
                  {
                          fast(batchcost[i]);
                  }
                  for(int i=0;i<batch*numofwep;i++)
                  {
                          fast(cost[i]);
                  }
                  for(int i=0;i<batch*numofwep;i++)
                  {
                          fast(rating[i]);
                  }
                  
                  int diff;
                  for(int i=0,k=0;i<batch;i++,k++)
                  {
                        int h=0;
                        diff=maxcost;
                        int hh=i;
                        int j=k*numofwep;
                        h=j+numofwep;
                        while(1)
                        {
                                
                                if(h>batch*numofwep)
                                   break;
                                diff-=batchcost[hh];
                                int bst=0;
                                int knpsck[1003];
                                knpsck[0]=0;
                                if(diff>0)
                                {
                                  for(int l=1;l<=diff;l++)
                                  {
                                        for(int s=j;s<h;s++)
                                        {   
                                            if(l>=cost[s])
                                            {
                                                          bst=max(bst,knpsck[l-cost[s]]+rating[s]);
                                            }
                                        }
                                        knpsck[l]=bst;
                                  }
                                  ans[index++]=knpsck[diff];
                                  
                                }
                                hh++;
                                h=h+numofwep;
                               
                        }
                  }
                  
                  sort(ans,ans+index);
                  int bb=ans[index-1];
                  printf("%d\n",bb);
        }
       
        return 0;
}


