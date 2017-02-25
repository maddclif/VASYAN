#include <stdio.h>
int main(void)
{
    float celsius, fahr;
    int lower = 0, upper = 300, step = 20;
    celsius = lower;
    printf("    Table\n");
    while (celsius <= upper){
        fahr = (celsius * 9 / 5 +32);
        printf ("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
