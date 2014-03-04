#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
 
int arr[30005];
int ar[30005];
int n;
int flag[1000003];
int ans[200004];
int tree[30005];
 
inline void fast(int &x)
{
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
 
    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());
 
    if(c=='-')
    {
        neg = 1;
        c = getchar_unlocked();
    }
 
    for(; c>47 && c<58 ; c = getchar_unlocked())
    {
        x =(x<<1)+(x<<3) + c - 48;
    }
 
    if(neg)
        x = -x;
} 
struct S
{
    int in;
    int s;
    int last;
    S(){};
    S(int a,int b,int c)
    {
        in=a;
        s=b;
        last=c;
    };
 
    bool operator < (S aa)const
    {
        return last<aa.last;
    }
 
}e[200004];
 
void update(int index,int val)
{
     while(index<=n)
     {
 
          ar[index]+=val;
          index+=(index & -index);
     }
}
 
int read(int index)
{
       int sum=0;
       while(index>0)
       {
            sum+=ar[index];
            index-=(index & -index);
       }
       return sum;
}  
  
 
int main()
{
    
     fast(n);
     for(int i=1;i<=n;i++)
     {
         fast(arr[i]);
     }
 
 
     int a,x,y;
     fast(a);
     for(int i=0;i<a;i++)
     {
            fast(x);fast(y);
            e[i]=S(i,x,y);
     }
     sort(e,e+a);      
 
     memset(flag,-1,sizeof(flag));
     memset(ar,0,sizeof(ar));
     int p=0,final=0;
     for(int i=1;i<=n;i++)
     {
          if(flag[arr[i]]!=-1)
          {
                     update(flag[arr[i]],-1);
          }
          else
             final++;
 
          update(i,1);
          flag[arr[i]]=i;
          
          while(p<a && e[p].last==i)
          {
                ans[e[p].in]=final-read(e[p].s-1);
                p++;
          }
      }
      for(int i=0;i<a;i++)
      {
 
          printf("%d\n",ans[i]);
      }
     
 
     
     return 0;
}
 
