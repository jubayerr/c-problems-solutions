#include <stdio.h>

int main()
{
    int nl;
    scanf("%d", &nl);
    for (int i = 1; i <= nl; i++)
    {
        int x[3];

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &x[j]);
        }

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (x[j] < x[k])
                {
                    int a = x[j];
                    x[j] = x[k];
                    x[k] = a;
                }
            }
        }
        printf("Case %d:", i);
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", x[j]);
        }
        printf("\n");
    }

    return 0;
}