#include <stdio.h>

int main(void)
{
    int u;
    int n;
    int i;

    for (i = 0; i < 9; i++)
    {
        for (n = 0; n < 10; n++)
        {
            putchar(i + '0');
            putchar(n + '0');
            if (i <= 8){
                putchar(',');
                putchar(' ');
            }
        }
        i == 0;
    }
    putchar('\n');
    return (0);
}