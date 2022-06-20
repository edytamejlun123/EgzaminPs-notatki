#include <stdio.h>
#include <stdlib.h>

struct Osoba{
    char imie[20];
    int wiek;
    float wzrost;
};
char najstarsza_osoba(int n, struct Osoba arg[])
{
    int max=arg[0].wiek;
    for(int i=0; i<n; i++)
    {
        if(max<arg[i].wiek)
            max = arg[i].wiek;
    }
    for (int i=0; i<n; i++)
    {
        if(max==arg[i].wiek)
            printf("%s\n", arg[i].imie);
    }
}
int main()
{
    struct Osoba o1 = {"Ola", 14, 167.8};
    struct Osoba o2 = {"Alicja", 89, 150.2};
    struct Osoba o3 = {"Abc", 90, 65.2};
    struct Osoba tab[] = {o1,o2,o3};
    najstarsza_osoba(3,tab);
    return 0;
}
