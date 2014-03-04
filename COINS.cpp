#include <algorithm>
#include <iostream>
#include <math.h>
#include <map>
#include <stdlib.h>
using namespace std;
static map<long long, long long> store;
long long value(long long i)
{
  if (i == 0)
    return(0);
  if (i == 1)
    return(1);

  if (store.find(i) == store.end())
  {
    long long v_2 = value(i/2);
    long long v_3 = value(i/3);
    long long v_4 = value(i/4);

    store[i]=max(i,(v_2 + v_3 + v_4));
  }
  return store[i];
}

int main()
{
  unsigned long long N=10;
  while (scanf("%lld",&N)!=EOF)
  {
    cout<<value(N)<<"\n";
  }
  return 0;
}

