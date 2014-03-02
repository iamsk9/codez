//maximum-bipartite-matching/
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
vector<int>graph[45004];
int x,y;
    

bool bpm(int u,bool seen[],int matchR[])
{
    // Try every job one by one
    int uu=graph[u].size();
    for(int v1=0;v1<uu;v1++)
    {
        int v=graph[u][v1];
        // If applicant u is interested in job v and v is
        // not visited
        if(!seen[v])
        {
            seen[v]=true;//Mark v as visited
            // If job 'v' is not assigned to an applicant OR
            // previously assigned applicant for job v (which is matchR[v])
            // has an alternate job available.
            // Since v is marked as visited in the above line, matchR[v]
            // in the following recursive call will not get job 'v' again
            if(matchR[v]<0 || bpm(matchR[v],seen,matchR))
            {
                matchR[v]=u;
                return true;
            }
        }
    }
    return false;
}

int maxBPM()
{
    // An array to keep track of the applicants assigned to
    // jobs. The value of matchR[i] is the applicant number
    // assigned to job i, the value -1 indicates nobody is
    // assigned.
    int matchR[45004];
    memset(matchR,-1,sizeof(matchR));// Initially all jobs are available
    int result = 0;//Count of jobs assigned to applicants
    for(int u=0;u<x;u++)
    {
        // Mark all jobs as not seen for next applicant.
        bool seen[45004];
        memset(seen,0,sizeof(seen));
        // Find if the applicant 'u' can get a job
        if (bpm(u,seen,matchR))
               result++;

    }
    return result;
}

int main()
{
    int t;
    scanf("%d",&t);
    int hor[303][303],ver[303][303];
    while(t--)
    {
        for(int i=0;i<x;++i) 
            graph[i].clear();
        char c1[303][303];

        memset(hor,-1,sizeof(hor));
        memset(ver,-1,sizeof(ver));
        x=y=0;                  
        int r,c;
        scanf("%d%d",&r,&c);
        for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                      scanf(" %c",&c1[i][j]);
                }
        }
        for(int i=0;i<r;i++)
        {
                 for(int j=0;j<c;j++)
                 {
                         if(c1[i][j]!='A')
                         {
                           if(j==0 || c1[i][j-1]=='A')
                              hor[i][j]=x++;
                           else
                              hor[i][j]=hor[i][j-1];
                         
                           if(i==0 || c1[i-1][j]=='A')
                              ver[i][j]=y++;
                           else
                              ver[i][j]=ver[i-1][j];
                         }
                 }
        }
        for(int i=0;i<r;i++)
        {
                 for(int j=0;j<c;j++)
                 {
                         if(c1[i][j]=='H')
                         {
                              graph[hor[i][j]].push_back(ver[i][j]);
                         }
                 }
        }
          
        int r1= maxBPM();
        printf("%d\n",r1);
        
    }

    
    return 0;
    
}


