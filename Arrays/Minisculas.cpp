#include <stdio.h>
#include <conio.h>
#include <cstdlib>

int main()
{
    char *p = (char *)malloc(255 * sizeof(char));
    char *paux;
    puts("introduzca la cadena a convertir: ");
    gets(p);

    /* p apunta al primer carácter de la cadena */
    // p = &CadenaTexto[0]

    paux = p;

    // Repetir mientras *p no sea cero

    while (*(p) != '\0')
    {
        // Restar 32, costante de código ASCII

        if (*(p) >= 97 && *(p) <= 122)
            *(p) = *(p)-32;

        p++;
    }

    puts("La cadena convertida es : ");
    // Utiliza paux para imprimir el inicio de la cadena
    puts(paux);

    puts("\nPulse enter (Enter) para continuar");
    getch();

    free(paux);
}