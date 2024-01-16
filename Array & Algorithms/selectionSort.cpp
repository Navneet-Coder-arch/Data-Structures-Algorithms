#include <iostream>

using namespace std;

//selection sort algo
void selectionSort(int *arr, int n){

    for (int i = 0; i < (n - 1); i++){
        for (int j = (i + 1); j < n; j++){
            if (*(arr + i) > *(arr + j)){
                swap(*(arr + i), *(arr + j));
            }
        }
    }

    return;

}

void displayArray(int *arr, int n){

    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++){
        cout << *(arr + i) << " ";
    }cout << endl;

    return;
}

int main() {
    int n;
    cout << "Size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter Elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    selectionSort(arr, n);
    displayArray(arr, n);

    delete[] arr;
    arr = NULL;

    return 0;
}
