#include <algorithm>
#include <iostream>
using namespace std;
const int N = 100048;
int s[N];
bool possible(int mid, int n, int c)
{
        int cnt=1;
        for(int b=0,i=1; i<n && cnt<c; ++i)
        {
            if(s[i]-s[b]>=mid) 
            {
                  ++cnt;
                  b=i;
            }
        }
        return cnt==c;
}
    
int main(void)
{
        int t; 
        scanf("%d",&t);
        while(t--)
        {
            int n,c;
            scanf("%d%d",&n,&c);
            for(int i=0; i<n; ++i) 
            {
                  scanf("%d",&s[i]);
            }
            sort(s,s+n);
            int low = 1, mid, high =s[n-1]-s[0];
            while(low<high)
            {
                mid=(low+high)>>1;
                if(possible(mid,n,c)) 
                     low=mid+1;
                else 
                     high=mid;
            }
            printf("%d\n", low-!possible(low,n,c));
        }
        return 0;
}

