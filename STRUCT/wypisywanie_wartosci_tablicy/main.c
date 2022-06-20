#include <stdio.h>
#include <stdlib.h>

struct Sklep{
    char nazwa;
};
void wypisz(struct Sklep tab[])
{
    for(int i=0; i<6; i++)
    {
        printf("sklep : %s", tab[i].nazwa);
    }
}
int main(void)
{
    struct Sklep tab[] = {{"a"},{"b"},{"c"},{"d"},{"e"},{"f"}};
    wypisz(tab);
    return 0;
}
