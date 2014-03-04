#include<iostream>
using namespace std;
int main()
{
     int c;
     cin >> c;
     while(c--)
     {
        long int N,K,T,F;
        cin >> N >> K >> T >> F;
        cout << (N-F)/(1-K)+F << endl;
     }
     return 0;
}
