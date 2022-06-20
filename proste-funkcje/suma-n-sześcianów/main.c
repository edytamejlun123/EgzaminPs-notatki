#include <stdio.h>
#include <stdlib.h>

int suma_szescianow(unsigned int n)
{
    int suma=0;
    for(int i=1; i<n+1; i++)
    {
        suma += i*i*i;
    }
    return suma;
}

int main()
{
    printf("%d \n", suma_szescianow(2));
    printf("%d \n", suma_szescianow(4));
}
