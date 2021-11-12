#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%i%i", &a, &b);
    if (b <= a)
    {
        printf("error");
    }
    else
    {
        for (int i = a + 1 ; b > i ; i++)
        {
            printf("%i\n", i);
        }
    printf("%i\n", (b - a - 1));
    }
}