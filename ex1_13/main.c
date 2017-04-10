#include <stdio.h>
#define IN 1
#define OUT 0
int main(void)
{
    int a, b, i, d;
    int wordlength[14];
    for (i = 0; i < 14; ++i)
        wordlength[i] = 0;
    i = 0;
    while ((a = getchar()) != EOF){
        d = IN;
        if (a == ' ' || a == '\n' || a == '\t' || a == '.' || a == ',')
            d = OUT;
        else if (d == OUT)
            d == IN;
        if (d == IN)
            ++i;
        if (d == OUT && i != 0){
            ++wordlength[i];
            i = 0;
        }
    }
    for (i = 1; i < 14; ++i){
        printf(" %d\t", i);
        for (b = 0; b < wordlength[i]; ++b)
            printf("$");
        printf("\n");
    }
    return 0;
}
