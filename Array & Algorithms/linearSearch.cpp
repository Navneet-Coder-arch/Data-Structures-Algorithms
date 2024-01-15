#include <iostream>

using namespace std;

// algorithm for linear search
int linearSearch(int *arr, int n, int key){
    int foundAtIdx = -1;

    for (int i = 0; i < n; i++){
        if (key == *(arr + i)){
            foundAtIdx = i;
        }
    }

    return foundAtIdx;

}

int main() {
    int n; // array size
    cout << "Size of array: ";
    cin >> n;

    int *arr = new int[n]; // array initialization
    cout << "Elements of the array: ";
    for (int i = 0 ; i < n; i++){
        cin >> *(arr + i);
    }

    int key;
    cout << "Key: ";
    cin >> key;

    cout << "Key found at index: " << linearSearch(arr, n, key); // calling linearSearch(algo)

    #include <iostream>

using namespace std;

// algorithm for linear search
int linearSearch(int *arr, int n, int key){
    int foundAtIdx = -1;

    for (int i = 0; i < n; i++){
        if (key == *(arr + i)){
            foundAtIdx = i;
        }
    }

    return foundAtIdx;

}

int main() {
    int n; // array size
    cout << "Size of array: ";
    cin >> n;

    int *arr = new int[n]; // array initialization
    cout << "Elements of the array: ";
    for (int i = 0 ; i < n; i++){
        cin >> *(arr + i);
    }

    int key;
    cout << "Key: ";
    cin >> key;

    cout << "Key found at index: " << linearSearch(arr, n, key); // calling linearSearch(algo)

    //deallocation
    delete[] arr;
    arr = NULL;

    return 0;
}
