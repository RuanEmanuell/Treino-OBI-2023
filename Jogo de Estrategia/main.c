#include <stdio.h>
#include <stdlib.h>

int main()
{
    int J, R, P, cont, vencedor, max;
    cont = vencedor = max = 0;
    scanf("%d %d", &J, &R);

    int pontos[J];

    for(int i=0; i<J; i++)
    {
        pontos[i] = 0;
    }

    for(int i=0; i<J*R; i++)
    {
        scanf("%d", &P);
        pontos[cont] = pontos[cont] + P;
        if(cont<J-1)
        {
            cont++;
        }
        else
        {
            cont = 0;
        }
    }

    for(int i=0; i<J; i++)
    {
        if(pontos[i] >= max)
        {
            max = pontos[i];
            vencedor = i;
        }
    }

    vencedor = vencedor + 1;

    printf("%d\n", vencedor);


    return 0;
}