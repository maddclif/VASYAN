#include <stdio.h>
int main(void)
{
    int table=0, space=0, novayastr=0, a;
    while ((a = getchar()) != EOF)
    {
        if (a == '\t')
            table++;
        if (a == ' ')
            space++;
        if (a == '\n')
            novayastr++;
        printf ("\rtable=%d\tspace=%d\tnovayastr=%d", table, space, novayastr);
    }
    return 0;
}
