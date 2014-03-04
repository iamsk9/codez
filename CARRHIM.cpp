#include<iostream>
#include<cstring>
using namespace std;
int main()
{

      char m1;
      char redteam='z';
      int flag=1;
      int white=9;
      int black=9;
      char c[10];
      int w,b,r;
      while(gets(c))
      {
           if(c[0]!='#')
           {
             
              if(flag)
              {
                      m1=c[0];
                      flag=0;
              }
              w=c[2]-'0';
              b=c[4]-'0';
              r=c[6]-'0';
              if(r)
              {
                   redteam=c[0];
              }
              white-=w;
              black-=b;
           }
           else
           {
                if((white !=0 && black!=0) || redteam=='z')
                        printf("Incomplete game.\n");
                else if(white ==0 && black==0)
                {
                   if(redteam=='A' || redteam=='C')
                           printf("Team-1 win and the point is 5.\n");
                   else if(redteam=='B' || redteam=='D')
                           printf("Team-2 win and the point is 5.\n");
                }
                else if((white ==0 && black!=0))
                {
                      if(m1=='A'||m1=='C')
                      {
                              if(redteam=='A' || redteam=='C')  
                                   printf("Team-1 win and the point is %d.\n",5+black);
                              else
                                   printf("Team-1 win and the point is %d.\n",black);
                       }
                       else
                       {
                              if(redteam=='B' || redteam=='D')  
                                   printf("Team-2 win and the point is %d.\n",5+black);
                              else
                                   printf("Team-2 win and the point is %d.\n",black);
                       }
                 }
                 else if((white !=0 && black==0))
                 {
                    if(m1=='A'||m1=='C')
                    {
                              if(redteam=='A' || redteam=='C')  
                                   printf("Team-2 win and the point is %d.\n",white);
                              else
                                   printf("Team-2 win and the point is %d.\n",5+white);
                     }
                     else
                     {
                              if(redteam=='B' || redteam=='D')  
                                   printf("Team-1 win and the point is %d.\n",white);
                              else
                                   printf("Team-1 win and the point is %d.\n",5+white);
                     }
                 }
                 flag=1;
                 white=9;
                 black=9;
                 redteam='z';
                 
             }
      }
      
  
      return 0;
}

