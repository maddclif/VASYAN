#include <stdio.h>
int main(void)
{
    float fahr, celsius;
    printf ("   Table\n");
    while(fahr) {
       celsius = (5.0/9.0) * (fahr-32.0);
       printf ("%3.0f %6.1f\n", fahr, celsius);
    }

    return 0;
}
