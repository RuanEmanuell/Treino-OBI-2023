#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, V, R, max, last;
    max = R = 100;

    scanf("%d", &N);

    int C[N];

    for(int i=0; i<N; i++)
    {
        scanf("%d", &V);
        C[i] = V;
    }

    for(int i=0; i<N; i++)
    {
        R = R + C[i];
        if(R >= max){
                max = R;
            }
    }

    printf("%d\n", max);

    return 0;
}