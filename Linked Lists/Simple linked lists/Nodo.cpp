#include <iostream>
using namespace std;

class Nodo{
    public:
        int datos;
        Nodo *siguientePtr;
};

class Lista{
    private:
        Nodo *primeroPtr;
        bool estaVacia();

    public:
        Lista();
        ~Lista();
        void insertarAlInicio(int valor);
        void recorreIterativo();  
        void buscarElemento(int elementoBuscado);
        
};
    
bool Lista::estaVacia(){
    return primeroPtr == NULL;
}

Lista::Lista(){
    primeroPtr = NULL;
}

Lista::~Lista(){
    if (!estaVacia()){
        cout<<"\nDestruyendo nodos...\n\n";

        Nodo *actualPtr = primeroPtr;
        Nodo *tempPtr;

        while(actualPtr != NULL){
            tempPtr = actualPtr;
            cout<<tempPtr -> datos<<' ';
            actualPtr= actualPtr -> siguientePtr;
            delete tempPtr;
        }
    }
        
    cout<<"\n\nSe destruyeron todos los nodos\n\n";
}

    void Lista::insertarAlInicio(int valor){
        Nodo *nuevoPtr = new Nodo();
        nuevoPtr -> datos = valor;

        if (estaVacia()){
            nuevoPtr -> siguientePtr = NULL;
        } else {
            nuevoPtr -> siguientePtr = primeroPtr;
        }
        primeroPtr = nuevoPtr;
    }

    void Lista::recorreIterativo(){
        if (estaVacia()){
            cout<<"\nLa lista esta vacía\n\n";
            system("pause");
            return;
        }

        Nodo *actualPtr = primeroPtr;

        cout<< "\nLos elementos de la lista son: ";
        
        while(actualPtr != NULL){
            cout<< actualPtr ->datos <<" -> ";
            actualPtr = actualPtr->siguientePtr;
        }
        
        cout<<"\n\n";
        system("pause");
    }

    void Lista::buscarElemento(int elementoBuscado){
        if (estaVacia()){
            cout<<"No existen elementos en la lista\n";
            system("pause");
            return;
        }

        Nodo *actualPtr = primeroPtr;

        bool elementoEncontrado = false;
        while((actualPtr != NULL) && elementoEncontrado == false){
            if ((actualPtr -> datos) == elementoBuscado ){
                cout<<"El elemento "<<elementoBuscado<<" se encuentra en la posicion: " <<actualPtr;
                elementoEncontrado=true;
            } else {
                actualPtr = actualPtr -> siguientePtr;
            }
        }
        
        cout<<"\n\n";
        system("pause");
    }

    void menu(){
        system("cls");
        cout<<"\n ..[ LISTA SIMPLEMENTE LIGADA ].. \n\n";
        cout<<"[1] Inserta elemento al inicio \n";
        cout<<"[2] Imprimir los valores de la lista \n";
        cout<<"[3] Buscar elemento \n";
        cout<<"[4] SALIR \n";
        cout<<"\nIngrese una opcion : ";
    }

    int main(){
        int opcion;
        int valor;

        Lista listaEnteros;


        system("color 1F");

        do{
            menu();
            cin>>opcion;

            switch (opcion)
            {
            case 1:
                cout<<"\nIngrese valor entero:";
                cin>> valor;
                listaEnteros.insertarAlInicio(valor);
                listaEnteros.recorreIterativo();
                break;
            case 2:
                listaEnteros.recorreIterativo();
                break;
            case 3:
                int elementoBuscado;
                cin>>elementoBuscado;
                listaEnteros.buscarElemento(elementoBuscado);
                break;
            }
        } while (opcion !=3);
        return 0;
    }

