#include <stdio.h>

int main()
{int i;
    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    char letter = 'a';
    while (letter <= 'f') {
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return 0;
}
