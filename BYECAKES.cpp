#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    float a1,a2,a3,a4,b1,b2,b3,b4;
    while(scanf("%f%f%f%f%f%f%f%f",&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4))
    {
            if(a1==-1.0&&a2==-1.0&&a3==-1.0&&a4==-1.0&&b1==-1.0&&b2==-1.0&&b3==-1.0&&b4==-1.0)
            
            {
                                           break;
            }
            else if(a1==0.0&&a2==0.0&&a3==0.0&&a4==0.0)
            {
                              printf("0 0 0 0\n");
            }
            else
            {
                vector<float> v;
                float p=0.0,q=0.0,r=0.0,s=0.0;
                int x=0,y=0,z=0,zz=0,dd=0;
                p=a1/b1;
                q=a2/b2;
                r=a3/b3;
                s=a4/b4;
                v.push_back(p);
                v.push_back(q);
                v.push_back(r);
                v.push_back(s);
                sort(v.begin(),v.end(),greater<float>());
                float ff=0;
                ff=ceil(v[0]);
                dd=(int)(ff);
                x=dd*b1-a1;
                y=dd*b2-a2;
                z=dd*b3-a3;
                zz=dd*b4-a4;
                printf("%d %d %d %d\n",x,y,z,zz);
            }
    }
    return 0;
}
                

