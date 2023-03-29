#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	int Udigito = n % 10;

    printf("The last digit of %i is %i ", n, Udigito);

    if (Udigito > 5)
        printf("and is greater than 5\n");
    else if (Udigito == 0)
        printf("and is 0\n");
    else
        printf("and is less than 6 and not 0\n");

	return (0);
}