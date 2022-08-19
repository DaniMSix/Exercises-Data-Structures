#include <iostream>

using namespace std;

int main(){
    int indexArrayNormal;
    
    
    cout<<"Enter the number of array elements"<<endl;
    cin>>indexArrayNormal;
    
    int arrayNormal[indexArrayNormal];
    
    
    
    
    int element;
    
    for (int i= 0; i< indexArrayNormal; i++){
    	
    	cout<<"Inserte el elemento número: "<<endl;
        cin>>element;
        arrayNormal[i]= element;
    }
    
    // Reverse of array
    
    int indexArrayReverse = 0;
    
    while (indexArrayNormal>indexArrayReverse){
        
        int elementAux;
        
        arrayNormal[indexArrayNormal] = elementAux;
        arrayReverse[indexArrayReverse] = elementAux;
        
        indexArrayNormal--;
        
    }
    
    for (int i=0; i<indexArrayReverse;i++){
    	cout<<"-----------------------------------"<<endl;
    	cout<<"-- "<<endl;
    	cout<<arrayReverse[i];
	}

}


