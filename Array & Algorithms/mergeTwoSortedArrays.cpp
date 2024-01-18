#include <iostream>

using namespace std;

//algo for merging two sorted arrays
void mergeTwoSortedArrays(int *arr1, int n, int *arr2, int m, int *arr3){

    int i = 0, j = 0; // here i is the iterator of arr1 and j is the iterator of arr2
    int k = 0; // here k is the iterator for arr3 (which will store merged array)

    while ((i < n) && (j < m)) {

        if (*(arr1 + i) < *(arr2 + j))
            *(arr3 + k++) = *(arr1 + i++);

        else
            *(arr3 + k++) = *(arr2 + j++);

    }

    while (i < n){
        *(arr3 + k++) = *(arr1 + i++);
    }

    while (j < m){
        *(arr3 + k++) = *(arr2 + j++);
    }

}

void displayArray(int *arr, int n){

    cout << "Elements of the array after merging: ";

    for (int i = 0; i < n; i++){
        cout << *(arr + i) << " ";
    }cout << endl;

    return;
}

int main() {
    int n, m;
    cout << "Size of the first array: ";
    cin >> n;

    cout << "Size of the second array: ";
    cin >> m;

    int *arr1 = new int[n];
    int *arr2 = new int[m];

    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++){
        cin >> *(arr1 + i);
    }

    cout << "Enter elements of the second array: ";
    for (int i = 0; i < m; i++){
        cin >> *(arr2 + i);
    }

    int *arr3 = new int[(n + m)];

    mergeTwoSortedArrays(arr1, n, arr2, m, arr3);
    displayArray(arr3, (n + m));

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

    arr1 = arr2 = arr3 = nullptr;

    return 0;
}
