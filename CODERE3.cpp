#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
     int t;
	 scanf("%d",&t);
	 while(t--)
	 {
	    int n;
		scanf("%d",&n);
		int arr1[n];
		
		int len1[n],len2[n];
		for(int i=0;i<n;i++)
		{
		       scanf("%d",&arr1[i]);
		}
		for (int i=0;i<n;i++)
		{
              len1[i]=1;
			  len2[i]=1;
		}
		
		for (int i = 1; i<n; i++)
		{
             for (int j = 0 ;j < i; j++)
			 {
                  if (arr1[i] > arr1[j] && len1[i] < len1[j] + 1)
				  {
                        len1[i] = len1[j] + 1;
				  } 
			}
	    }
		for (int i = n-2;i>=0;i--)
		{
             for (int j = n-1;j>i;j--)
			 {
                  if (arr1[i]>arr1[j] && len2[i] < len2[j] + 1)   
				  {
                        len2[i] = len2[j] + 1;
				  } 
			}
	    }
	    
	    int max=len1[0]+len2[0]-1;
	
	    for (int i = 1; i<n; i++)
	    {
             if(len1[i]+len2[i]-1>max)
             {
                 max=len1[i]+len2[i]-1;
                 
             }
         }
         printf("%d\n",max);
     }
  
     return 0;
}
		
		
		

