#include <stdio.h>

void main()
{

    for (int i = 1; i <= 25; i++)
    {
        printf("%d ", i);
        if (!(i % 5))
            printf("\n");
    }
}