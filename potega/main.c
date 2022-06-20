#include <stdio.h>
#include <stdlib.h>

int potega(unsigned int a, unsigned int b)
{
    int i,wynik=1;
    for (i=0;i<b;i++)
        {
        wynik=wynik*a;
        }
    printf("%d", wynik);
    return 0;
}

int main()
{
    unsigned int m,n;
    printf("Podaj podstawe i potege:");
    scanf("%d %d", &m, &n);
    potega(m,n);
    return 0;
}
