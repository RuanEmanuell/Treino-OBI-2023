#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a1, a2, a3, res, i, res1, res2, res3;

    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);

    res1 = (a2*2) + (a3*4);
    res2 = (a1*2) + (a3*2);
    res3 = (a1*4) + (a2*2);

    if(res1<=res2)
        printf("%d\n", res1);
    else
        if(res2<=res3)
            printf("%d\n", res2);
        else
            printf("%d\n", res3);

	return 0;
}
