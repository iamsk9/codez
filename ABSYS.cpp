#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int conv(char s1[])
{
    char q[100];
    int i=0;
    while(s1[i]!='\0')
    {
                      q[i]=s1[i];
                      i++;
    }
    q[i]='\0';
    int ret=0,l;
    l=strlen(q);
    for(int i=0;i<l;i++)
    {
        if(!isdigit(q[i]))
        {
                           return -1;
        }
        ret=ret*10+(q[i]-48);
    }
    return ret;
} 
int main()
{
    char s1[100],s2[2],s3[100],s4[2],s5[100];
    int c,v1,v2,v3;
    cin>>c;
    while(c)
    {
        
        cin>>s1>>s2>>s3>>s4>>s5;
        v1=conv(s1);
        v2=conv(s3);
        v3=conv(s5);
        if(v1<0) 
           v1=v3-v2;
        if(v2<0) 
           v2=v3-v1;
        if(v3<0) 
           v3=v1+v2;
        cout<<v1<<" + "<<v2<<" = "<<v3<<endl;
        c--;
    }
    return 0; 
}
