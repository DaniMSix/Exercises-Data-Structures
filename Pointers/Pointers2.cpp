#include <iostream>
using namespace std;

int main(){
	int a = 7;
	int *aPtr;
	
	aPtr = &a; // Se le asigna la direcci�n de a a aPtr
	
	cout<<"La direcci�n de a es: "<<&a<<endl;
	cout<<"El valor de aPtr es: "<<aPtr<<endl;
	
	cout<<"El valor de a es: "<<a<<endl;
	cout<<"El valor de *aPtr es: "<<*aPtr<<endl;
	
	
	// Se cancelan entre si
	cout<<"Demostraci�n de que * y & son inversos "
	<<"uno del otro.\n&*aPtr = "<<&*aPtr
	<<"\n*&aPtr = "<<*&aPtr<<endl;
	
	cout<<"Direcci�n de memoria de aPtr = "<<&aPtr<<endl;
	return 0;
	
}
