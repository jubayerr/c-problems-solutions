#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 != 0)
        {
            printf("odd\n");
        }
        else
        {
            printf("even\n");
        }
    }
    return 0;
}