#include <iostream>

using namespace std;

//algo=> insertion to sorted array
void insertToSortedArray(int *arr, int element, int &size, int capacity){
    
    if (size == capacity){
        cout << "\nArray Is Full!!" << endl << endl;
        return;
    }

    int k = (size - 1);

    while ((*(arr + k) >= element) && (k >= 0)){
        *(arr + (k + 1)) = *(arr + k);

        k--;

    }
    *(arr + (k + 1)) = element;

    size++;
    return;
}

void displayArray(int *arr, int size){

    cout << "Elements of the array: ";
    for (int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }cout << endl;

    return;

}

int main() {
    int capacity, size;
    cout << "Capacity of the array: ";
    cin >> capacity;

    cout << "Size of the array: ";
    cin >> size;

    int *arr = new int[capacity];
    cout << "Elements of the array: ";
    for (int i = 0; i < size; i++){ // array should be sorted in ascending order
        cin >> *(arr + i);
    }

    int element;
    cout << "Element to be inserted: ";
    cin >> element;

    insertToSortedArray(arr, element, size, capacity);
    displayArray(arr, size);

    delete[] arr;
    arr = NULL;

    return 0;
}
