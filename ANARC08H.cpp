#include<iostream>
using namespace std;
int main() 
{
int n,k;
while(scanf("%d%d", &n, &k))
{
   if(n==0&&k==0)break;

   int res = 0;
   for (int i=1; i<=n; ++i)
          res = (res + k) % i;
   printf("%d %d %d\n", n,k,res+1);
}
return 0;
}

