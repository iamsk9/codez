#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i=0,j=0,num,n,q;
    long int sum=0;
    scanf("%d",&num);
    q=sqrt(num);
    n=floor(q);
    for(i=0;i<n;i++)
    {
        sum+=(num/(i+1))-i;
    }
    printf("%ld\n",sum);
    return 0;
}

