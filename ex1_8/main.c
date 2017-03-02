#include <stdio.h>
int main(void)
{
    int table=0, space=0, novayastr=0, a, b, c;
    while ((b = getchar()) != EOF)
    {
        if (b == '\t')
            ++table;
        printf ("%d\n", table);
    }
    while ((a = getchar()) != EOF)
    {
        if (a == ' ')
        ++space;
        printf ("%d\n", space);
    }
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        ++novayastr;
        printf ("%d\n", novayastr);
    }
    return 0;
}
