#include <stdio.h>

int print(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i > 1)
        {
            printf(" ");
        }
        printf("%d", i);
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    print(a);
    return 0;
}