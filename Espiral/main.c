#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int dir;
    unsigned long long int N, B, cont, L, C, loop;
 
    L = C  = dir = loop = cont = 0;
 
    scanf("%llu %llu", &N, &B);
 
    N=N-1;
    B=B-1;
 
    while(cont<=B-loop)
    {
        if(dir==0)
        {
            if(cont<B-loop)
            {
                C = N-loop;
                cont=cont+C-loop;
                dir =1;
            }
            else
                break;
        }
        if(dir==1)
        {
            if(cont<B-loop)
            {
                L=N-loop;
                cont=cont+L-loop;
                dir = 2;
            }
            else
                break;
        }
 
        if(dir==2)
        {
            if(cont<B-loop)
            {
                cont=cont+C-loop;
                C=loop;
                dir = 3;
            }
            else
                break;
        }
        if(dir==3)
        {
            loop++;
            if(cont<B-loop)
            {
                cont=cont+L-loop;
                L=loop;
                dir = 0;
            }
            else
                break;
 
        }
 
    }
 
    if(cont+loop+1>B){
        if(dir==0){
            for(unsigned long long int i=cont+loop-1; i>B; i--){
                L++;
            }
        }
        if(dir==1){
            for(unsigned long long int i=cont+loop; i>B; i--){
                C--;
            }
        }
        if(dir==2){
            for(unsigned long long int i=cont+loop; i>B; i--){
                L--;
            }
        }
        if(dir==3){
            for(unsigned long long int i=cont+loop-1; i>B; i--){
                C++;
            }
        }
    }
 
 
    printf("%llu %llu\n", L+1, C+1);
 
    return 0;
 
 
}
 