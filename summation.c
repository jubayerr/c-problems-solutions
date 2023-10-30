#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        int lsd = n % 10;
        int msd = n / 10000;

        int res = lsd + msd;

        printf("Sum = %d\n", res);
    }

    return 0;
}