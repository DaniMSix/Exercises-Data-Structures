#include <iostream>
using namespace std;

int main(){
	int a = 7;
	int *aPtr;
	
	aPtr = &a; // Se le asigna la dirección de a a aPtr
	
	cout<<"La dirección de a es: "<<&a<<endl;
	cout<<"El valor de aPtr es: "<<aPtr<<endl;
	
	cout<<"El valor de a es: "<<a<<endl;
	cout<<"El valor de *aPtr es: "<<*aPtr<<endl;
	
	
	// Se cancelan entre si
	cout<<"Demostración de que * y & son inversos "
	<<"uno del otro.\n&*aPtr = "<<&*aPtr
	<<"\n*&aPtr = "<<*&aPtr<<endl;
	
	cout<<"Dirección de memoria de aPtr = "<<&aPtr<<endl;
	return 0;
	
}
