#include <stdio.h>
#include<math.h>
#define MAXP 10000

int P[MAXP];
int N,S;

int solve1()
{
  int i,M,d,t;
  M=0;
  if(S%N)return -1;
  d=S/N;
  for(i=0;i<N;i++)
  {
    t=d-P[i];
    P[i]+=t;
    P[i+1]-=t;
    t=abs(t);
    if(t>M)M=t;
  }
  return M;
}

int read1()
{
  int i;
  scanf("%d ",&N);
  S=0;
  if(N>=0)
  {
    for(i=0;i<N;i++)
    {
      scanf("%d ",P+i);
      S+=P[i];
    }
  }
  return(N>=0);
}

int main()
{
  while(read1())printf("%d\n",solve1());
  return 0;
}


