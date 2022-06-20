#include <stdio.h>
#include <stdlib.h>

struct Trojkat{
    float bok1;
    float bok2;
    float bok3;
};
float obwod(struct Trojkat b)
{
    return b.bok1+b.bok2+b.bok3;
}
int main()
{
    struct Trojkat t1 = {1,4,3};
    struct Trojkat t2 = {5,4,3};
    printf("%.1f\n", obwod(t1));
    printf("%.1f\n", obwod(t2));
    return 0;
}
