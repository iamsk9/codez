#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int x,y,z,temp,l;
char a[101];
int m;
while(scanf("%s",a)!=EOF)
{
      temp=0;
      int b[10000];
      m=strlen(a)-1;
      int z1=0;
      if(a[0]=='1'&&a[1]=='\0')
      {
                              cout<<"1";
      }
      else
      {
        for(int j=m;j>=0;j--)
        {

             z=int(a[j]-48)*2+temp;
             b[z1]=z%10;
             temp=z/10;
             z1++;
        }
       if(temp>0)
       {
           while(temp>0)
           {
               l=temp%10;
               b[z1]=l;
               z1++;
               temp=temp/10;
           }
           b[z1]='\0';
       }
       else
       {
            b[z1]='\0';
       }
       if(b[0]!=0)
       {
            b[0]=(b[0]-2);
       }
       else if(b[0]==0)
       {
           int ss=0,t=1;
           while(b[ss]==0)
           { 
                          if(t)
                          {
                             b[ss]=8;
                             t=0;
                             ss++;
                          }
                          else
                          {
                              b[ss]=9;
                              ss++;
                          }
           }
           b[ss]=b[ss]-1;
       }
       int d=z1-1;
       while(b[d]==0)
       {
                   d--;
       }
       for(int y=d;y>=0;y--)
       {
              cout<<b[y];
       }
      }
      cout<<endl;
}
return 0;
}

