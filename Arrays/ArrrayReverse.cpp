#include <iostream>
using namespace std;

void arrayReverse(int arrayNormal[], int indexArrayNormal)
{
    int arrayReverse[indexArrayNormal];
    for (int indexArrayReverse = indexArrayNormal - 1; indexArrayReverse >= 0; indexArrayReverse--)
    {
        cout << arrayNormal[indexArrayReverse] << " | ";
    }
}

int main()
{
    int indexArray;

    cout << "Enter the number of array elements" << endl;
    cin >> indexArray;

    int arrayNormal[indexArray];

    int element;

    for (int numberOfElement = 0; numberOfElement < indexArray; numberOfElement++)
    {
        cout << "Insert the element number " << numberOfElement << " :" << endl;
        cin >> element;
        arrayNormal[numberOfElement] = element;
    }

    arrayReverse(arrayNormal, indexArray);
}
