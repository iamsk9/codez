#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char a[501],b[501];
   while( cin >> a >> b)
   {
        if( a[0] =='*' && b[0] == '*' )
              break;
        int c = 0;
        int size = strlen(a);
        int k=0;
        for( int i=0; i<size; ++i )
        {
              if( a[i] != b[i] && !k )
             {
                       ++c;
                       k=1;
             }
             else if( a[i] == b[i] )
             {
                       k=0;
             }
        }
        cout << c << endl;
   }
   return 0;
}
