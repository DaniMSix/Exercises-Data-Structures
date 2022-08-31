#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int indexAuxiliar = 0;
int element;
int writeArray(int indexArray, vector<int> array[])
{
    if (indexArray == array->size())
    {
        cout << array[indexArray];
    }
    else
    {
        cout << array[indexArray] << " | ";
        writeArray(indexArray - 1, array);
    }
}

int main()
{
    int numberOfElements;
    cout << "Type the number of elements to enter" << endl;
    cin >> numberOfElements;

    vector<int> array;
    int element;

    for (int indexArray = 0; indexArray < numberOfElements; indexArray++)
    {
        cout << "Type the element number " << indexArray << endl;
        cin >> element;
        array[indexArray] = element;
    }
    cout << writeArray(0, array);
}