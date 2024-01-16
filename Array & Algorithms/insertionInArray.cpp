#include <iostream>

using namespace std;

//insertion algorithm
void insertionArray(int *arr, int element, int idx, int &size, int capacity){

    if (size == capacity){
        cout << "\nArray Is Full\n";
        cout << endl;
        return;
    }

    int j = (size - 1);
    while (j >= idx){
        *(arr + (j + 1)) = *(arr + j);
        j--;
    }

    *(arr + idx) = element;
    size += 1;

    return;

}

// function to display the array
void displayArray(int *arr, int n){
    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;

    return;
}


int main() {
    int capacity, n;
    cout << "Capacity of the array: ";
    cin >> capacity;
    cout << "Size of the array: ";
    cin >> n;

    int *arr = new int[capacity];

    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    int k, idx;
    cout << "Element to be inserted: ";
    cin >> k;
    cout << "On the index: ";
    cin >> idx;    

    insertionArray(arr, k, idx, n, capacity);
    displayArray(arr, n);

    delete[] arr;
    arr = NULL;

    return 0;
}
