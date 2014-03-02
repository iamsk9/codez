#include<iostream>
using namespace std;

int tree[1000005];
int n;
void update(int index,int val)
{

     while(index<=n)
     {
            tree[index]+=val;
            index+=(index & -index);
     }
}

int read(int index)
{
     int sum=0;
     while(index>0)
     {
            sum+=tree[index];
            index-=(index & -index);
     }
     return sum;
}

int main()
{
     int q;
     scanf("%d%d",&n,&q);
     char c[10];
     for(int i=0;i<q;i++)
     {
             int a,b;
             scanf("%s %d %d",c,&a,&b);
             if(c[0]=='f')
             {
                          int ans=read(b)-read(a-1);
                          printf("%d\n",ans);
             }
             else
             {
                 update(a,b);
             }
     }
   
     return 0;
}


