#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>
using namespace std;

void sortCharacters(char *chain, int size)
{
    int i;
    bool flag = true;
    int temp;
    while (flag)
    {
        flag = false;
        for (int index = 0; index < sizeof(*chain) - 1; i++)
        {
            if (*(chain) >= 97 && *(chain) <= 122)
            {
                temp = chain[i];
                num[index] = num[index + 1];
                num[i + 1] = temp;
                flag = true;
            }
        }
    }
    return num;
}

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
    // Calculamos la longitud de la cadena
    int size;
    while (*p)
    {
        size++;
        p++;
    }

    // Convertimos la cadena a mayuscula y después ordenamos
    //  puts("La cadena convertida es : ");
    //   Utiliza paux para imprimir el inicio de la cadena
    puts(paux);

    // Ordenamos la cadena

    getch();

    free(paux);
}