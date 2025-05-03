#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int total = add(a, b);
    printf("%d\n", total);
    return 0;
}