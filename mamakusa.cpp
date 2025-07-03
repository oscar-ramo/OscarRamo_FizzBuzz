#include <cstdio>

// Oscar Ramo 2025/07/02 Google Format
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (i % 6 == 0)
            printf("MAMAKUSA\n");
        else if (i % 2 == 0)
            printf("MAMASE\n");
        else if (i % 3 == 0)
            printf("MAMASA\n");
        else
            printf("%d\n", i);
}