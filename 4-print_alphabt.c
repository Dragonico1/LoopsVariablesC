#include <stdio.h>

int main()
{
    char letter = 'a';
    while (letter <= 'z') {
        if (letter == 'q'){
            letter++;
        }
        else if (letter == 'e'){
            letter++;
        }
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return 0;
}
