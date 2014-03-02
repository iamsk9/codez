#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int x;
    scanf("%d",&x);
    while(x--)
    {
              int a,one=0,two=0,three=0;
              scanf("%d",&a);
              vector<int>v;
              for(int i=0;i<a;i++)
              {
                      int b;
                      scanf("%d",&b);
                      if(b==1)
                      {
                              one++;
                      }
                      else if(b==2)
                      {
                             two++;
                      }
                      else if(b==3)
                      {
                            three++;
                      }
                      else
                      {
                           v.push_back(b);
                      }
              }
              sort(v.begin(),v.end(),greater<int>());
              while(one)
              {
                        printf("1 ");
                        one--;
              }
              for(int i=0;i<v.size();i++)
              {
                      printf("%d ",v[i]);
              }
              if(v.size()==0)
              {
                   if(two)
                   {
                          printf("2 ");
                   }
                   if(three)
                   {
                          printf("3 ");
                   }
              }
              else
              {
                   if(three)
                   {
                          printf("3 ");
                   }
                   if(two)
                   {
                          printf("2 ");
                   }
              }
              printf("\n");
    }
    return 0;
}
                      
                      
                      
                      
                      
                      
                      
                      
                      
              

