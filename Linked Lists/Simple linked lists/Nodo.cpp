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
    void eliminarElemento(int elementoEliminar);
    void eliminarElementosDuplicados();
    void insertarAntes(int valor, int referencia);
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

void Lista::eliminarElemento(int elementoEliminar)
{

    if (!estaVacia())
    {
        Nodo *auxBorrarPtr;
        Nodo *anteriorPtr = NULL;

        auxBorrarPtr = primeroPtr;

        while ((auxBorrarPtr != NULL) && ((auxBorrarPtr->datos) != elementoEliminar))
        {
            anteriorPtr = auxBorrarPtr;
            auxBorrarPtr = auxBorrarPtr->siguientePtr;
        }

        // auxBorrarPtr -> siguientePtr = auxBorrarPtr;
        // anteriorPtr ->siguientePtr = auxBorrarPtr;
    }
    /*
        while((auxBorrar != NULL) && elementoEncontrado == false){
            if ((actualPtr -> datos) == elementoEliminar ){
                tempPtr = auxBorrar;
                elementoEncontrado=true;
            } else {
                auxBorrar = auxBorrar -> siguientePtr;
            }
        }

        actualPtr -> siguientePtr;
        delete tempPtr;
    */
}

void Lista::eliminarElementosDuplicados()
{
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
        if (actualPtr ->siguientePtr!= NULL)
        {
            anteriorPtr = actualPtr;
            actualPtr = actualPtr->siguientePtr;
        }
        else
        {
            valorEncontrado == true;
        }
    }

    if (valorEncontrado == false){
    
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

void menu()
{

    system("cls");
    cout << "\n ..[ LISTA SIMPLEMENTE LIGADA ].. \n\n";
    cout << "[1] Inserta elemento al inicio \n";
    cout << "[2] Imprimir los valores de la lista \n";
    cout << "[3] Insertar elemento al final de la lista\n";
    cout << "[4] Buscar elemento \n";
    cout << "[5] Eliminar elemento de la lista\n";
    //    cout<<"[6] Eliminar elementos duplicados\n";
    cout << "[6] Insertar antes\n";
    cout << "[7] SALIR \n";
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
            int elementoEliminar;
            cout << "Ingrese el elemento a eliminar\n";
            cin >> elementoEliminar;
            listaEnteros.eliminarElemento(elementoEliminar);
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
        }
    } while (opcion != 10);
    return 0;
}
