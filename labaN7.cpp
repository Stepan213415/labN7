#include <iostream>
#include <algorithm> 

using namespace std;

int main() 
{
    
    int array[3][3];

    cout << "Enter 9 numbers to fill the 3x3 array:" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cin >> array[i][j];
        }
    }

    cout << "The initial array:" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) 
    {
        sort(array[i], array[i] + 3);
    }

    cout << "Sorted array:" << endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 3; ++j) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

