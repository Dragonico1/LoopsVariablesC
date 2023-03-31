#include <stdio.h>

int main(void)
{
    int c, d, u;

    for (c = 0; c <= 7; c++)
    {
        for (d = c + 1; d <= 8; d++)
        {
            for (u = d + 1; u <= 9; u++)
            {
                putchar(c + '0');
                putchar(d + '0');
                putchar(u + '0');

                if (c != 7 || d != 8 || u != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');

    return (0);
}
