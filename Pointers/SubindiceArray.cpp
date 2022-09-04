#include <iostream>
using namespace std;

int main()
{

    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    cout << " Se imprime el arreglo con:\n\nNotación de subndice de arreglo\n";
    for (int i = 0; i < 4; i++)
    {

        cout << "b[" << i << " ] = " << b[i] << '\n';
    }

    cout << "\nNotación apuntador/desplazamiento en donde el apuntador es el nombre del arreglo" << endl;

    for (int desplazamiento1 = 0; desplazamiento1 < 4; desplazamiento1++)
    {

        cout << "*(b +" << desplazamiento1 << ") = " << *(b + desplazamiento1) << '\n';
    }

    cout << "\nNotación de subindice de apuntador\n"
         << endl;

    for (int j = 0; j < 4; j++)
    {

        cout << "bPtr[" << j << " ] = " << bPtr[j] << '\n';
    }

    cout << "\nNotación de apuntador/desplazamiento \n"
         << endl;

    for (int desplazamiento2 = 0; desplazamiento2 < 4; desplazamiento2++)
    {

        cout << "*(bPtr + " << desplazamiento2 << ") = " << *(bPtr + desplazamiento2) << '\n';
    }

    cout << "'\n";

    cout << "Dirección de memoria que ocupa cada elemento utilizando el operador \n"
            "dirección -> &"
         << endl;

    for (int indexAux = 0; indexAux < 4; indexAux++)
    {
        cout << "b[ " << indexAux << " ] = " << &b[indexAux] << endl;
    }

    cout << "Dirección de memoria que ocupa cada elemento empleando el apuntador \n"
            "bPtr"
         << endl;

    for (int indexAux1 = 0; indexAux1 < 4; indexAux1++)
    {
        cout << "b[ " << indexAux1 << " ] = " << (bPtr + indexAux1) << '\n';
    }

    cout << bPtr;
}
