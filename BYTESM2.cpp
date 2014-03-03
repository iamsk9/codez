#include<stdio.h>
int main() 
{
    int table[100][100];
    int n;
    int h, w;
    int i, j;
    int max;

    scanf("%d", &n);
    while(n--) 
    {
        scanf("%d %d", &h, &w);
        for(i = 0; i < h; ++i) 
        {
            for(j = 0; j < w; ++j) 
            {
                scanf("%d", &(table[i][j]));
            }
        }

        for(i = h-2; i >= 0; --i) 
        {
            for(j = 0; j < w; ++j) 
            {
                max = -1;
                if(j > 0) 
                {
                    if(table[i+1][j-1] > max)
                        max = table[i+1][j-1];
                }
                if(table[i+1][j] > max)
                {
                    max = table[i+1][j];
                }
                if(j < w-1) 
                {
                    if(table[i+1][j+1] > max)
                        max = table[i+1][j+1];
                }
                table[i][j] += max;
            }
        }
        max = -1;
        for(i=0; i < w; ++i) {
            if(max < table[0][i])
                max = table[0][i];
        }
        printf("%d\n", max);
    }
    return 0;
}
