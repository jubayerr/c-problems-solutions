#include <stdio.h>

int main()
{
    int count = 1;
    for (int i = 1000; i >= 1; i--)
    {
        printf("%d\t", i);
        if (count == 5)
        {
            printf("\n");
            count = 0;
        }
        count++;
    }
    return 0;
}