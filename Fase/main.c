#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, K, C, max, res;
    max = res = 0;

    scanf("%d", &N);
    scanf("%d", &K);

    int vetor[N];

    for(int i = 0; i<N; i++){
        scanf("%d", &C);
        vetor[i] = C;
        if(vetor[i]>=max){
            max = vetor[i];
        }
    }

    max = max+1;

    while(res<K){
        max--;
        for(int i = 0; i<N; i++){
            if(vetor[i] == max){
                res++;
            }
        }
    }

    printf("%d", res);

    return 0;
}