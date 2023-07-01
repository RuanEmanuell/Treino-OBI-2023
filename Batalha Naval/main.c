#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int N, D, L, R, C, valid;
    valid = 0;
    int LC[10][10] = {0};
 
    scanf("%d", &N);
 
    for(int i=1; i<=N; i++)
    {
        scanf("%d %d %d %d", &D, &L, &R, &C);
 
        //N == nÃºmero de navios
        //D == 0 ? navio na horizontal : vertical
        //L == comprimento do navio em posiÃ§Ã£o do vetor
        //R == linha que o navio estÃ¡ em sua primeira posiÃ§Ã£o
        //C == coluna que o nÃ¡vio estÃ¡
 
        R = R-1;
        C = C - 1;
 
 
        if(D==0)
        {
            if(LC[R][C] == 0 && C+L<=10)
            {
                LC[R][C] = i;
                for(int j=0; j<L; j++)
                {
                    LC[R][C+j] = i;
                }
            }
            else
                valid = 1;
        }
        else
        {
            if(LC[R][C]==0 && R+L<=10)
            {
                LC[R][C] = i;
                for(int j=0; j<L; j++)
                {
                    LC[R+j][C] = i;
                }
            }
            else
                valid = 1;
        }
 
    }
 
    if(valid==0)
        printf("Y\n");
    else
        printf("N\n");
 
    /*
 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", LC[i][j]);
        }
        printf("\n");
    }
    
    */
 
 
 
 
    return 0;
}
 