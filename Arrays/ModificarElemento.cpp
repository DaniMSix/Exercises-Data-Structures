#include <iostream>
using namespace std;


int main(void){
	
	int numElementos;
	int elementoReemplazo;
	
	cout<<"Dígite el número de elementos a ingresar"<<endl;
	cin>>numElementos;
	
	int arreglo[numElementos];
	int elemento;
	
	for (int i= 0; i<numElementos; i++){
		cout<<"Ingrese el elemento número "<<i<<endl;
		cin>>elemento;
		arreglo[i] = elemento;
		
	}
	
	cout<<"Los elementos que ingreso fueron los siguientes"<<endl;
	
	
	for (int i = 0; i<numElementos; i++){
		
		cout<<arreglo[i]<<" | ";
		
	}
	
	cout<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<endl;
	int elementoModificar;
	cout<<"Dígite el elemento a modificar"<<endl;
	cin>>elementoModificar;
	
	int indiceAux = 0;
	
	while ((indiceAux<=numElementos) && (elementoModificar != arreglo[indiceAux])){
        indiceAux++;
    }


    if (indiceAux > numElementos){
        cout << "No se encontro el elemento"<<endl;
    } else {
    	cout<<"Ingrese el elemento nuevo para la posición "<<indiceAux<<" "<<endl;
    	cin>>elementoReemplazo;
    	arreglo[indiceAux] = elementoReemplazo; 
    	
	}

	cout<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<endl;
	
	for (int i = 0; i<numElementos; i++){
		
		cout<<arreglo[i]<<" | ";
		
	}	
	cout<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<endl;
	
	
	
	
}






