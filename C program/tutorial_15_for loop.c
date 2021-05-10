#include <stdio.h>

int main()

{
    int i, j = 0;
    printf("Hello World\n");

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%d %d\n", i, j);
            i++;
            j++;
        }
    }

    return 0;
}
