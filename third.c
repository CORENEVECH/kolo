#include <stdio.h>

int main()
{
    const char *w[8] = {"", "понеділок", "вівторок", "середа", "четвер", "п'ятница", "субота", "неділя"};
    int d;
    scanf("%i", &d);
    if (d >= 1 && d <= 7)
    {
        printf("%s\n", w[d]);
    }
    else printf("error");
}