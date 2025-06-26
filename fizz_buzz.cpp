#include <cstdio>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    if (i%6 == 0) printf("FIZZBUZZ\n");
    else if (i%2 == 0) printf("FIZZ\n");
    else if (i%3 == 0) printf("BUZZ\n");
    else printf("%d\n", i);
}