#include <iostream>
using namespace std;

class Nodo
{
public:
    int datos;
    Nodo *siguientePtr;
};

class Lista
{
private:
    Nodo *primeroPtr;
    bool estaVacia();

public:
    Lista();
    ~Lista();
    void insertarAlInicio(int elementoInsertarInicio);
    void recorreIterativo();
    void buscarElemento(int elementoBuscado);
    void insertaAlFinal(int elementoInsertarFinal);
    void eliminarPrimero();
    void eliminarElementosDuplicados();
    void insertarAntes(int valor, int referencia);
    void eliminarNodo(int referencia);
    void eliminarUltimoNodo();
    void insertarDespues(int valor, int referencia);
};

bool Lista::estaVacia()
{
    return primeroPtr == NULL;
}

Lista::Lista()
{
    primeroPtr = NULL;
}

Lista::~Lista()
{
    if (!estaVacia())
    {
        cout << "\nDestruyendo nodos...\n\n";

        Nodo *actualPtr = primeroPtr;
        Nodo *tempPtr;

        while (actualPtr != NULL)
        {
            tempPtr = actualPtr;
            cout << tempPtr->datos << ' ';
            actualPtr = actualPtr->siguientePtr;
            delete tempPtr;
        }
    }

    cout << "\n\nSe destruyeron todos los nodos\n\n";
}

void Lista::insertarAlInicio(int valor)
{
    Nodo *nuevoPtr = new Nodo();
    nuevoPtr->datos = valor;

    if (estaVacia())
    {
        nuevoPtr->siguientePtr = NULL;
    }
    else
    {
        nuevoPtr->siguientePtr = primeroPtr;
    }

    primeroPtr = nuevoPtr;
}

void Lista::insertaAlFinal(int elementoInsertarAlFinal)
{

    Nodo *nuevoPtr = new Nodo();
    nuevoPtr->datos = elementoInsertarAlFinal;
    nuevoPtr->siguientePtr = NULL;

    bool elementoEncontrado = false;

    if (primeroPtr == NULL)
    {
        primeroPtr = nuevoPtr;
        return;
    }

    Nodo *actualPtr = primeroPtr;

    while (actualPtr->siguientePtr != NULL)
    {
        actualPtr = actualPtr->siguientePtr;
    }

    actualPtr->siguientePtr = nuevoPtr;
}

void Lista::recorreIterativo()
{
    if (estaVacia())
    {
        cout << "\nLa lista esta vacía\n\n";
        system("pause");
        return;
    }

    Nodo *actualPtr = primeroPtr;

    cout << "\nLos elementos de la lista son: ";

    while (actualPtr != NULL)
    {
        cout << actualPtr->datos << " -> ";
        actualPtr = actualPtr->siguientePtr;
    }
    cout << "\n\n";
    system("pause");
}

// CORREGIR MÉTODO

void Lista::buscarElemento(int elementoBuscado)
{

    if (estaVacia())
    {
        cout << "No existen elementos en la lista\n";
        system("pause");
        return;
    }

    Nodo *actualPtr = new Nodo();
    // quizás no sirva porque el elemento solo será buscado no insertado
    // actualPtr -> datos = elementoBuscado;

    actualPtr = primeroPtr;

    bool elementoEncontrado = false;

    while ((actualPtr != NULL) && elementoEncontrado == false)
    {
        if ((actualPtr->datos) == elementoBuscado)
        {
            cout << "El elemento " << elementoBuscado << " se encuentra en la posicion: " << actualPtr << endl;
            elementoEncontrado = true;
        }
        else
        {
            actualPtr = actualPtr->siguientePtr;
        }
    }

    if (actualPtr != NULL)
    {
        cout << "El elemento " << elementoBuscado << " se encuentra en la posicion: " << actualPtr;
    }
    else
    {
        cout << "No se encontro el elemento\n";
    }

    cout << "\n\n";
    system("pause");
}

// CORREGIR MÉTODO

void Lista::eliminarPrimero()
{

    if (estaVacia())
    {
        cout << "\nLa lista esta vacía\n\n ";
    }

    cout << "\nDestruyendo el nodo: " << primeroPtr->datos << "\n";
    Nodo *tempPtr = primeroPtr;
    primeroPtr = primeroPtr->siguientePtr;
    delete tempPtr;
}

void Lista::eliminarElementosDuplicados()
{
}

void Lista::eliminarNodo(int referencia)
{
    if (estaVacia())
    {
        cout << "\nEl nodo dado como referencia no se encuentra en la lista.\n";
        return;
    }

    Nodo *actualPtr = primeroPtr;
    Nodo *previoPtr;

    while (actualPtr->datos != referencia && actualPtr->siguientePtr != NULL)
    {
        previoPtr = actualPtr;
        actualPtr = actualPtr->siguientePtr;
    }

    if (actualPtr->datos == referencia)
    {
        Nodo *tempPtr = actualPtr;

        if (primeroPtr == actualPtr)
        {
            primeroPtr = primeroPtr->siguientePtr;
        }
        else
        {
            previoPtr->siguientePtr = actualPtr->siguientePtr;
        }

        cout << "\nDestruyendo el nodo: " << tempPtr->datos << "\n";
        delete tempPtr;
    }
    else
    {
        cout << "\n El nodo dado como referencia no se encuentra en la lista.\n";
    }
}

void Lista::insertarAntes(int valor, int referencia)
{

    if (estaVacia())
    {
        cout << "No se encontro la posición de referencia\n";
        system("pause");
        return;
    }

    Nodo *nuevoPtr = new Nodo();
    nuevoPtr->datos = valor;
    nuevoPtr->siguientePtr = NULL;

    Nodo *actualPtr = primeroPtr;
    Nodo *anteriorPtr;

    bool valorEncontrado = false;

    while ((actualPtr->datos != referencia) && (valorEncontrado == false))
    {
        if (actualPtr->siguientePtr != NULL)
        {
            anteriorPtr = actualPtr;
            actualPtr = actualPtr->siguientePtr;
        }
        else
        {
            valorEncontrado == true;
        }
    }

    if (valorEncontrado)
    {

        if (primeroPtr == actualPtr)
        {
            nuevoPtr->siguientePtr = primeroPtr;
            primeroPtr = nuevoPtr;
        }
        else
        {
            cout << "Se encontro el valor\n";
            anteriorPtr->siguientePtr = nuevoPtr;
            nuevoPtr->siguientePtr = actualPtr;
        }
    }
}

void Lista::eliminarUltimoNodo()
{

    if (estaVacia())
    {
        // cout << "La lista está vacía\n";
        system("pause");
        return;
    }

    Nodo *actualPtr = primeroPtr;
    Nodo *anteriorPtr;

    while (actualPtr->siguientePtr != NULL)
    {
        anteriorPtr = actualPtr;
        actualPtr = actualPtr->siguientePtr;
    }

    Nodo *auxPtr = actualPtr;

    if (actualPtr = primeroPtr)
    {
        primeroPtr = NULL;
        cout << "Nodo eliminado\n";
    }
    else
    {
        anteriorPtr->siguientePtr = NULL;
    }

    cout << "Nodo eliminado:" << auxPtr->datos;
    delete auxPtr;
}

void Lista::insertarDespues(int valor, int referencia)
{
    Nodo *nuevoPtr = new Nodo();
    nuevoPtr->datos = valor;

    Nodo *actualPtr = primeroPtr;
    bool valorEncontrado = false;

    while (actualPtr->datos != referencia && valorEncontrado == false)
    {
        if (actualPtr != NULL && actualPtr->datos != referencia)
        {
            actualPtr->siguientePtr = actualPtr;
        }
        else
        {
            valorEncontrado = true;
        }
    }

    if (valorEncontrado)
    {
        if (actualPtr == primeroPtr)
        {
        }
        else
        {
            Nodo *auxPtr;
            actualPtr->siguientePtr = auxPtr;
            actualPtr->siguientePtr = nuevoPtr;
            nuevoPtr->siguientePtr = auxPtr;
        }
    }
    else
    {
        cout << "Valor no encontrado\n";
    }
}
// Insertar después

void menu()
{

    system("cls");
    cout << "\n ..[ LISTA SIMPLEMENTE LIGADA ].. \n\n";
    cout << "[1] Inserta elemento al inicio \n";
    cout << "[2] Imprimir los valores de la lista \n";
    cout << "[3] Insertar elemento al final de la lista\n";
    cout << "[4] Buscar elemento \n";
    cout << "[5] Eliminar primero\n";
    cout << "[6] Insertar antes\n";
    cout << "[7] Eliminar nodo \n";
    cout << "[8] Eliminar último nodo\n";
    cout << "[9] Insertar antes\n";
    cout << "\nIngrese una opcion : ";
}

int main()
{
    int opcion;
    int valor;

    Lista listaEnteros;

    system("color 1F");

    do
    {
        menu();
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "\nIngrese valor entero:";
            cin >> valor;
            listaEnteros.insertarAlInicio(valor);
            listaEnteros.recorreIterativo();
            break;
        case 2:
            listaEnteros.recorreIterativo();
            break;
        case 3:
            int elementoInsertarFinal;
            cout << "Ingrese el elemento a ingresar al final\n";
            cin >> elementoInsertarFinal;
            listaEnteros.insertaAlFinal(elementoInsertarFinal);
            listaEnteros.recorreIterativo();
            break;
        case 4:
            int elementoBuscado;
            cout << "Ingrese el elemento a buscar\n";
            cin >> elementoBuscado;
            listaEnteros.buscarElemento(elementoBuscado);
            break;
        case 5:
            listaEnteros.eliminarPrimero();
            listaEnteros.recorreIterativo();
            break;
        case 6:
            int valor, referencia;
            cout << "Ingrese el valor a insertar\n";
            cin >> valor;
            cout << "\nIngrese el valor de referencia\n";
            cin >> referencia;
            listaEnteros.insertarAntes(valor, referencia);
            listaEnteros.recorreIterativo();
            break;
        case 7:
            int valorEliminar;
            cout << "Ingrese el valor a eliminar\n";
            cin >> valorEliminar;
            listaEnteros.eliminarNodo(valorEliminar);
            listaEnteros.recorreIterativo();
            break;
        case 8:
            listaEnteros.eliminarUltimoNodo();
            listaEnteros.recorreIterativo();
            break;
        case 9:
            int valor2, referencia2;
            cout << "Ingrese el nuevo valor\n";
            cin >> valor;
            cout << "Ingrese la referencia\n";
            cin >> referencia;
            listaEnteros.insertarAntes(valor2, referencia2);
            listaEnteros.recorreIterativo();
        }
    } while (opcion != 10);
    return 0;
}
