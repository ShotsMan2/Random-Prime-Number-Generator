#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, asal, sum, sayi, j;

    printf("n i giriniz");
    scanf("%d", &n);

    sum = 1;

    srand(time(NULL));

    for (;;)
    {
        asal = 1;

        sayi = rand();

        for (j = 2; j < sayi; j++)
        {
            if (sayi % j == 0)
            {
                asal = 0;
                break;
            }
        }
        if (asal == 1)
        {
            printf("%d. sayi: %d\n", sum, sayi);
            sum++;
        }
        if (sum == n + 1)
        {
            break;
        }
    }
}
