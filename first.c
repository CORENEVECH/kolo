#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%i", &n);
    for (int k = 1 ; n > k ; k++)
    {
        if (k * k > n)
        {
            printf("%i\n", k);
            break;
        }
    }
}