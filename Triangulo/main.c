#include <stdio.h>
#include <stdlib.h>
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#define max(a,b)            (((a) > (b)) ? (a) : (b))
 
 
int main()
{
    int c1, c2, c3, c4, m1, m2, m3, m4;
 
    scanf("%d", &c1);
    scanf("%d", &c2);
    scanf("%d", &c3);
    scanf("%d", &c4);
 
    m1 = min(min(min(c1, c2), c3), c4);
    m4 = max(max(max(c1, c2), c3), c4);
 
    if(c1 == m1)
    {
        m2 = min(min(c2, c3), c4);
        if(c2==m2)
            m3 = min(c3, c4);
        else
 
            m3 = min(c2, c4);
    }
    else
    {
        if(c2 == m1)
        {
            m2 = min(min(c1, c3), c4);
            if(c1==m2)
                m3 = min(c3, c4);
            else
                m3 = min(c1, c4);
        }
        else
        {
            if(c3 == m1)
            {
                m2 = min(min(c1, c2), c4);
                if(c1==m2)
                    m3 = min(c2, c4);
                else
                    m3 = min(c1, c4);
            }
            else
            {
                if(c4 == m1)
                {
                    m2 = min(min(c1, c2), c3);
                    if(c1==m2)
                        m3 = min(c2, c3);
                    else
                        m3 = min(c1, c2);
                }
            }
        }
    }
 
    if(m1+m2>m3 || m2+m3>m4)
        printf("S\n");
    else
        printf("N\n");
 
 
    return 0;
 
}//fimalgoritmos
 
 