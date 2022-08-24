#include <iostream>
using namespace std;

int main(){
	
	int *xPtr, variable=3;
	
	xPtr = &variable;
	
	cout<<"------------------------------ Memory address -------------------------------"<<endl;
	cout<<"Variable: "<<&variable<<endl;
	cout<<"Pointer: "<<&xPtr;
	
	cout<<endl;
	
	cout<<"------------------------------ Values -------------------------------"<<endl;
	cout<<"Variable: "<<variable<<endl;
	cout<<"Pointer: "<<xPtr;
	
	
}



