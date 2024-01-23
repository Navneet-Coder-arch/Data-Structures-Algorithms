#include <iostream>

using namespace std;

int main() {
    //creating an array statically
    int arr[5] = {1, 2, 3, 4, 5};

    //creating an array dynamically
    int* arrDynamic = new int[5] {5, 4, 3, 2, 1};

    // printing both arrays

    //for static array
    cout << "Static Array's Elements: ";
    
    for (int i = 0; i < 5 ; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    //for dynamic array
    cout << "Dynamic Array's Elements: ";

    for (int i = 0; i < 5; i++) {
        cout << *(arrDynamic + i) << " ";
    }

    cout << endl;

    return 0;
}
