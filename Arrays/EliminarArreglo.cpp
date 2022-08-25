#include <iostream>
using namespace std;

int main(void)
{

	int numElementos;

	cout << "Dígite el número de elementos a ingresar" << endl;
	cin >> numElementos;

	int arreglo[numElementos];
	int elemento;

	for (int i = 0; i < numElementos; i++)
	{
		cout << "Ingrese el elemento n�mero " << i << endl;
		cin >> elemento;
		arreglo[i] = elemento;
	}

	cout << "Los elementos que ingreso fueron los siguientes" << endl;

	for (int i = 0; i < numElementos; i++)
	{

		cout << arreglo[i] << " | ";
	}

	cout << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << endl;

	int elementoEliminar;
	cout << "D�gite el elemento a eliminar" << endl;
	cin >> elementoEliminar;

	int indiceAux = 0;

	while ((indiceAux <= numElementos) && (elementoEliminar != arreglo[indiceAux]))
	{
		indiceAux++;
	}

	if (indiceAux > numElementos)
	{
		cout << "No se encontro el elemento buscado" << endl;
	}
	else
	{
		for (int i = indiceAux; i < numElementos - 1; i++)
		{

			arreglo[i] = arreglo[i + 1];
		}
		numElementos = numElementos - 1;
	}

	cout << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << endl;

	for (int i = 0; i < numElementos; i++)
	{

		cout << arreglo[i] << " | ";
	}

	cout << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << endl;
}
