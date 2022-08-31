#include <iostream>
using namespace std;

int indexAuxiliar = 0;

void writeArray(int numberOfElements, int array[])
{
    if (numberOfElements == indexAuxiliar)
    {
        cout << array[numberOfElements];
    }
    else
    {
        cout << array[numberOfElements] << " | ";
        writeArray(numberOfElements - 1, array);
    }
}

int main()
{
    int numberOfElements;
    cout << "Type the number of elements to enter" << endl;
    cin >> numberOfElements;

    int array[numberOfElements], element;

    for (int indexArray = 0; indexArray < numberOfElements; indexArray++)
    {
        cout << "Type the element number " << indexArray << endl;
        cin >> element;
        array[indexArray] = element;
    }
    writeArray(numberOfElements - 1, array);
}