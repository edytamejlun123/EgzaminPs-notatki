#include <stdio.h>
#include <stdlib.h>

struct Struktura{
    int pole1;
    int pole2;
};

void zamiana(struct Struktura *zm)
{
    zm->pole1 = 45;
}
int main()
{
    struct Struktura zm = {2,3};
    zamiana(&zm);
    printf("%d", zm.pole1);
    return 0;
}
