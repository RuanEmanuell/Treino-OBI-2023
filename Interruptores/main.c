#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    //N = interruptores
    //M = numero total de lampadas
    //L = numero de lampadas acesas
    //X = lampadas acesas
    //K = interruptor
    //Y = lampadas acessas associadas a esse interruptor
 
    /*
 
    3 3 -----------> N = 3, M = 3
    2 2 3 ---------> L = 2 , X.L
    1 3 -----------> K = 1, Y.K
    2 1 2 ---------> K = 2, Y.K
    1 2 -----------> K = 1, Y.K
    */
 
    int N, M, L, X, K, Y, qtd, aceso, pos;
 
    pos = 1;
    qtd = 0;
 
    scanf("%d %d", &N, &M);
 
    int lampadas[N][M];
    int lampadas_interruptores[N][M];
 
    scanf("%d", &L);
 
    int lampadas_acesas[M];
    int lampadas_acesas_numeros[M];
 
    for(int i=0; i<N; i++)
    {
        lampadas_acesas[i] = 0;
        lampadas_acesas_numeros[i] = 0;
 
        for(int j=0; j<M; j++)
        {
            lampadas[i][j] = 0;
            lampadas_interruptores[i][j] = 0;
        }
    }
 
 
    aceso = L;
 
    for(int i=0; i<L; i++)
    {
        scanf("%d", &X);
        lampadas_acesas[X-1] = 1;
        lampadas_acesas_numeros[X-1]= X;
    }
 
 
    for(int i=0; i<N; i++)
    {
        scanf("%d", &K);
 
        for(int j=0; j<K; j++)
        {
            scanf("%d", &Y);
            lampadas[i][Y-1] = 1;
            lampadas_interruptores[i][Y-1] = Y;
        }
    }

        pos = 0;
 
 
        //CONDICOES PRA DAR -1:
        //NENHUM INTERRUPTOR ESTÃ LIGADO A UMA LUZ QUE COMEÃOU LIGADA.
        //SE UMA LUZ COMEÃAR LIGADA E TIVER 2 OU + INTERRUPTORES SEGUIDOS NO LOOP
        //LIGADOS A ELA, COM MAIS NENHUM A SEGUIR.
 
        while(aceso>0)
        {
            for(int i=0; i<N; i++)
            {
 
                if(aceso>0)
                    qtd++;
                else
                    break;
 
                aceso = 0;
 
                for(int j=0; j<M; j++)
                {
 
                    if(lampadas[i][j] == lampadas_acesas[j])
                    {
                        if(j+1==lampadas_interruptores[i][j])
                            lampadas_acesas[j] = 0;
                    }
                    else
                    {
                        if(j+1==lampadas_interruptores[i][j])
                            lampadas_acesas[j] = 1;
                    }
 
                    if(lampadas_acesas[j] == 1)
                    {
                        aceso++;
                    }
 
 
                }
 
                if(qtd == N*2){
                    aceso = 0;
                    pos = 1;
                }
            }
        }
 
        if(pos==0)
            printf("%d\n", qtd);
        else
            printf("-1");
 
 
        return 0;
 
 
    }
 