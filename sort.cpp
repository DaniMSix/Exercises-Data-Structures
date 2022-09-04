#include <iostream>

int main()
{
    void burbuja_lims(int T[], int inicial, int final)
    {
        int i, j;
        int aux;
        for (i = inicial; i i; j--)
            if (T[j] < T[j - 1])
            {
                aux = T[j];
                T[j] = T[j - 1];
                T[j - 1] = aux;
            }
    }
}










while (*(p) != '\0')
{
    // Restar 32, costante de código ASCII

    if (*(p) >= 97 && *(p) <= 122)
        *(p) = *(p)-32;

    p++;
}