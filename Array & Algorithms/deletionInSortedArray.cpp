#include <iostream>

using namespace std;

int binarySearch(int *arr, int n, int key){

    int begin = 0, end = (n - 1);
    int mid = (begin + end) / 2;

    while (begin <= end){
        if (*(arr + mid) == key){
            return mid;
        }
        if (key < *(arr + mid)){
            end = (mid - 1);
        }
        else {
            begin = (mid + 1);
        }

        mid = (begin + end) / 2;

    }

    return -1;

}

//algorithm deletion in sorted array
void deletionInSortedArray(int *arr, int &n, int element){

    if (n == 0){
        cout << "\nArray Is Empty!!" << endl << endl;
        return;
    }
    if (binarySearch(arr, n, element) < 0){
        cout << "\nIndex of the element not fund in the array" << endl << endl;
        return;
    }

    int eleIdx;

    if (binarySearch(arr, n, element) >= 0){
        eleIdx = binarySearch(arr, n, element);
    }

    int k = (eleIdx + 1);

    while (k <= n){
        *(arr + (k - 1)) = *(arr + k);

        k++;
    }

    n--;
    return;

}

void displayArray(int *arr, int n){

    cout << "Elements to the array: ";
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
    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++){ // array should be sorted in ascending order
        cin >> *(arr + i);
    }

    int element;
    cout << "Element to be deleted: ";
    cin >> element;

    deletionInSortedArray(arr, n, element);
    displayArray(arr, n);

    delete[] arr;
    arr = NULL;

    return 0;
}
