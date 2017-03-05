#include <stdio.h>
int main(void)
{
    int c, f=0;
    while ((c = getchar()) != EOF)
    {
     if (c== ' ')
     {
       f=1;
     }
     else if(f==1) {
         f=0;
         putchar(' ');
     }

     if (f == 0)
         putchar(c);
    }
    if (f==1){
        putchar(' ');
    }
    return 0;
}
