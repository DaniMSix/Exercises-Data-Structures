#include <iostream>
using namespace std;

// Paso por referencia

int raisePowernumber(int *);

int main()
{

    int num = 5;
    cout << "Valor original of num is: " << endl;
    cout << num << endl;

    cout << "Squared is: " << raisePowernumber(&num);
}

int raisePowernumber(int *nPtr)
{

    return *nPtr = *nPtr * *nPtr;
}
