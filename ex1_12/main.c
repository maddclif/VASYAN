#include <stdio.h>
int main(void)
{
  int c, p = 0;
  char n = '\n';
  while ((c = getchar()) != EOF)
  {
    if ((c == '\t' || c == ' ') && ( p == 0))
    {
           p++;
       putchar(n);
    }
      else{
        putchar(c);
        p = 0;
       }
  }
    return 0;
}
