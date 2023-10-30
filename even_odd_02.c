#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char x[101];
        scanf("%s", x);

        int sz = strlen(x);

        int flag = 1;

        for (int i = 0; i < sz; i++)
        {
            if (x[sz - 1] % 2 == 0)
            {
                flag = 1;
            }
            else if (x[sz - 1] % 2 != 0)
            {
                flag = 0;
            }
        }
        if(flag == 0) {
            printf("odd\n");
        }
        else{
            printf("even\n");
        }
    }
    return 0;
}