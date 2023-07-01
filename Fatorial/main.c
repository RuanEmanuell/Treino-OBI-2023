#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int res, n, fat, cont;

    fat = cont = 1;

    scanf("%d", &n);

    while(n>0){
       while(n>= cont * fat){
        cont = fat * cont;
        fat++;
       }
       res++;
       n = n - cont;
       cont = 1;
       fat = 1;
    }

    printf("%d \n", res);





	return 0;
}