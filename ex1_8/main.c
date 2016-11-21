#include <stdio.h>
int main(void)
{
    int space, tabl, strok, c;

    space = 0;
    tabl = 0;
    strok = 0;
    while((c = getchar()) != EOF)
    {
        if(c=='\t')
                ++tabl;
    }
    while((c = getchar()) != EOF)
    {
        if(c=='\s')
            ++space;
    }
    while((c = getchar()) != EOF)
    {
        if(c=='\s')
            ++strok;
    }
    printf("tabl = %d\space = %d\strok = %d\n", tabl, space, strok);
    return 0;
}
