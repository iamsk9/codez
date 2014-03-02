#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T, K, N, i, j;
    int siswa[21000];
    int height;
    
    scanf("%d", &T);
    for (i=0; i<T; i++)
    { 
        scanf("%d %d", &N, &K);
        for (j=0; j<N; j++)
        {
            scanf("%d", &siswa[j]);
        }
        sort(siswa, siswa+N);
        
        height=1000000999;

        if (K==1) 
        {
           height=0;
        }
        else if (N==K) 
        {
             height = siswa[K-1]-siswa[0];
        }
        else
        {
            for (j=0; j<N-K+1; j++)
            {
                height = min(height, siswa[j+K-1]-siswa[j]);
            }
        }
        printf("%d\n", height);
    }
    
    return 0;
}
