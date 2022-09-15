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

i=0
while(*(p+j) != '\0')
i(*(p+j)<*(p+i))
t= *(p+i)
*(p+i) = *(p+j)
*(p+j) = t

}
j++
}
i++
