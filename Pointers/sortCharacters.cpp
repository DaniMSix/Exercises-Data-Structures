#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include <iostream> 
using namespace std;

void sortCharacters(char *chain, int nElementos, char* paux)
{
    
    int aux;  
        for(int index=0;  index < nElementos;  index++ )
        {
            for(int j=0;j<nElementos -1;j++){
			
                if (*(chain+j)>*(chain+j+1))  
                {
                    aux = *(chain+j);
                    *(chain+j)=*(chain+j+1);
                    *(chain+j+1)=aux;
                } 
            } 
		}
	cout<<"Arreglo ordenado\n";
	for(int i=0;i<nElementos;i++){
		cout<<*(chain+1)<<" | ";
	}
}   


int main()
{
    char *p = (char *)malloc(255 * sizeof(char));
    char *paux;
    puts("introduzca la cadena a convertir: ");
    gets(p);
    
    int nElementos = strlen(p);
    
    paux = p;

    

    while (*(p) != '\0')
    {
        // Restar 32, costante de código ASCII

        if (*(p) >= 97 && *(p) <= 122)
            *(p) = *(p)-32;

        p++;
    }
    
    puts(paux);
    int size;
    
    // Ordenamos la cadena
    sortCharacters(p, nElementos, paux);
    

    getch();

    free(paux);
}
