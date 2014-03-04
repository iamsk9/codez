/*logic ------------
Let's say there is a total N girls , out of which W are double dating. In that case,
what should the count array look like? The answer is:
            Exactly W elements are equal to W-1.
            Exactly N-W elements are equal to W.
The first point corresponds to the girls who are double dating: they see all the girls who are double dating, except their own. 
The rest are the girls who are not double dating and they can see all the W girls who are double dating.
All that's left to do is check if the given array has the property described above, for some value of W. 
One of the ways to do that is to count the number of occurrences of each element in count, and then loop through 
all the possible values for W
*/
#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<stdio.h>
#include<queue>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define in(x) scanf("%d",&x)
#define inll(x) scanf("%lld", &x)
#define MOD 1000000007 // 10**9 + 7
#define INF 1e9
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define For(i, a, b) for (int i = a; i < b; i++)
#define Rfor(i, b, a) for (int i = b; i > a; i--)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef long l;

using namespace std;
const double pi = acos(-1.0);

int arr[10001];
int main()
{
   int t;
   in(t);
   while(t--)
   {	
	  int n;
	  in(n);
	  memset(arr,0,sizeof arr);
	  int q;
	  int flag=1;
	  for(int i=0;i<n;i++)
	  {
	  	   in(q);
	  	   if(q>=n)
	  	     flag=0;
	  	   arr[q]++;
	  }
	  if(!flag)
	  {
	     cout<<"-1\n";
	     continue;
	  }
	  if(arr[0]==n)
	  {
	     printf("0\n");
	     continue;
	  }
	  int f=0;
	  for(int i=1;i<10001;i++)
	  {
	  	   if(arr[i-1]==i && arr[i]==n-i)
	  	   {
	  	     printf("%d\n",i);
	  	     f=1;
	  	     break;
	  	   }
	  }
	  if(!f)
	     cout<<-1<<endl;
  }
  return 0;
}
	
	
	
	
	
	
	
	


