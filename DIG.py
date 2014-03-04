a=int(input())
for i in range(0,a):
    b=int(input())
    c=b*(b-1)*(b-2)*(b-3)
    d=c/24
    e=d%1000000007
    print(e)

