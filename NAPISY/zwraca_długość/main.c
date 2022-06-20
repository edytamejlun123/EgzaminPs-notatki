#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int ilosc=0;
    for(int i=0; napis[i]!=0; i++)
    {
        ilosc++;
    }
    return ilosc;
}
int main()
{
    printf("%i\n", dlugosc("Edytka"));
    printf("%i\n", dlugosc("szesc"));
    return 0;
}
