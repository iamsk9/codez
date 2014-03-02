import math
import sys
n=int(input())
for i in range(0,n):
     x,y,sum=map(int,sys.stdin.readline().split())
     a=x+y
     b=7*x+5*y+2*sum
     c=12*sum
     disc=int(math.sqrt(b*b-4*a*c))
     terms=(b+disc)/(2*a)
     diff=((2*sum)/terms)-a
     frst=x-2*diff
     print(terms)
     print(frst),
     for j in range(1,terms):
          z=frst+diff
          print(z),
          frst=z

