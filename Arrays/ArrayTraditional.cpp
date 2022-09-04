#include <stdio.h>

int longitud(char cad[]);

int main()
{

    char cad[] = "Universidad Veracruzana";
    printf("La longitud de %s es %d caracteres\n",
           cad, longitud(cad));
}

int longitud(char cad[])
{
    int posicion = 0;
    while (cad[posicion] != '\0')
    {
        posicion++;
    }

    return posicion;
}