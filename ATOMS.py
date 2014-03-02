import sys

t=int(input())
for i in range(0,t):
    n,k,m=map(int,sys.stdin.readline().split())
    t=0
    sum=n
    while(1):
      sum*=k
      if(sum>m):
         break
      t=t+1
    print t
    
