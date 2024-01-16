#include <iostream>

using namespace std;

//algo=> deletion in array
void deletionInArray(int *arr, int &size, int idxDel){

    if (size == 0){
        cout << "\nArray Is Empty!!" << endl << endl;
        return;
    }

    int k = (idxDel + 1);

    while (k <= size){
        *(arr + (k - 1)) = *(arr + k);

        k++;
    }

    size--;
    return;

}

void displayArrray(int *arr, int n){

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

    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    int idxDel;
    cout << "Delete the element at index: ";
    cin >> idxDel;

    deletionInArray(arr, n, idxDel);
    displayArrray(arr, n);

    delete[] arr;
    arr = NULL;

    return 0;
}
