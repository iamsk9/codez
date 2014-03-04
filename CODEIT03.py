import sys
import calendar
a=int(input())
for i in range(0,a):
    d,m,y=map(int,sys.stdin.readline().split())
    p=calendar.weekday(y,m,d)
    if(p==0):
          print ("Monday")
    elif(p==1):
          print ("Tuesday")
    elif(p==2):
          print ("Wednesday")
    elif(p==3):
          print ("Thursday")
    elif(p==4):
          print ("Friday")
    elif(p==5):
          print ("Saturday")
    else:
          print ("Sunday")
