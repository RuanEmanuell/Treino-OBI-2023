#include <stdio.h>
 
int main()
{
    int i, v, r, total;
    v = 1;
    char res_f = 'N';
    int maior = 0, empate = 0;
 
    i = total = 0;
 
    scanf("%d", &r);
    int n[r];
 
    while(i<r)
    {
        scanf("%d", &v);
        if(v != 0)
        {
            n[i] = v;
            total = total + v;
            i++;
        }
    }
 
    i = 0;
 
    while(i < r)
    {
        if(n[i] >= maior)
        {
            maior = n[i];
        }
        i++;
    }
 
    if(total>100000)
    {
        res_f = 'N';
    }
    else
    {
 
        if(n[0] == maior )
        {
            res_f = 'S';
        }
        else
        {
            if(n[0] < maior)
            {
                res_f = 'N';
            }
 
            i = 0;
            while(i < r)
            {
                if(n[i] == maior)
                {
                    empate++;
                }
                i++;
            }
        }
 
        if(empate > 1)
        {
            res_f = 'S';
        }
    }
 
    printf("%c\n", res_f);
    return 0;
}
 