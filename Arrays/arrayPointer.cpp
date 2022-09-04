#include <stdio.h>

int longitud(char *);

int main()
{

    char cad[] = "Universidad Veracruzana";
    printf("La longitud de %s es %d caracteres\n",
           cad, longitud(cad));
}

int longitud(char *cad)
{
    int cuenta = 0;

    while (*cad++)
        cuenta++;
    return cuenta;
}