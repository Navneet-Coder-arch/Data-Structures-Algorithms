#include <iostream>

using namespace std;

//bubble sort algorithm
void bubbleSort(int *arr, int n){

    for (int i = 0; i < (n - 1); i++){
        for (int j = 0; j < (n - i) - 1; j++){
            if (*(arr + j) > *(arr + (j + 1))){
                swap(*(arr + j), *(arr + (j + 1)));
            }
        }
    }

}

void displayArray(int *arr, int n){
    cout << "Elements of the array: ";

    for (int i = 0; i < n; i++){
        cout << *(arr + i) << " ";
    }
}

int main() {
    int n;
    cout << "Size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    bubbleSort(arr, n);
    displayArray(arr, n);

    delete[] arr;
    arr = NULL;

    return 0;
}
