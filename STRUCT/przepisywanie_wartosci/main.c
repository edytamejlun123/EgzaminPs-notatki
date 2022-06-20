#include <stdio.h>
#include <stdlib.h>

struct Trojkat{
    int bok1;
    int bok2;
    int bok3;
};

int przekazanie(struct Trojkat troj1, struct Trojkat *troj2)
{
    troj2 = &troj1;
}
int main()
{
    struct Trojkat troj1 = {1,2,5};
    struct Trojkat *troj2 = {6,6,5};
    printf("%d\n", troj2->bok1);
    return 0;
}
