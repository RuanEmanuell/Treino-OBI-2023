#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int A, B, C, p1, p2, p3, p4, p5, p6, p7, p8, p9;
 
    scanf("%d %d %d", &A, &B, &C);
 
    p1 = A-B;
    p2 = A-C;
    p3 = B-A;
    p4 = B-C;
    p5 = C-A;
    p6 = C-B;
    p7 = (A+B) - C;
    p8 = (B+C) - A;
    p9 = (A+C) - B;
 
    if(p1 == 0 || p2 == 0 || p3 == 0 || p4 == 0 || p5 == 0
       || p6 == 0 || p7 == 0 || p8 == 0 || p9 == 0){
        printf("S\n");
    }else
        printf("N\n");
 
    return 0;
}
 