import math
import sys

n=int(input())
for i in range(0,n):
      x,y=map(int,sys.stdin.readline().split())
      a=int(x)
      b=int(y)
      sum=a
      while(a>=b):
           sum=sum+a/b
           a=a-(a/b)*b+a/b
      print (sum)
    
