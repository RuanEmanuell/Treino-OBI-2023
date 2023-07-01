#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, current, max;

    current = max = 1;

    scanf("%d %d", &N, &X);

    int A[N];

    for(int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=0; i<N; i++)
    {
        if(A[i]+X>=A[i+1] && i+1<N){
            current++;
        }else{
            current = 1;
        }

        if(current>=max){
            max=current;
        }
    }

    printf("%d\n", max);


    return 0;


}
