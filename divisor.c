#include <stdio.h>

int main()
{
    int nl;
    scanf("%d", &nl);
    for (int i = 1; i <= nl; i++)
    {
        int x;
        scanf("%d", &x);
        printf("Case %d:", i);
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                printf(" %d", i);
            }
        }
        printf("\n");
    }
    return 0;
}