#include <iostream>

using namespace std;

// binary search algorithms
int binarySearch(int *arr, int n, int key){

    int begin = 0, end = (n - 1);
    int mid = (begin + end) / 2;

    while (begin <= end){
        if (*(arr + mid) == key){
            return mid;
        }
        if (key > *(arr + mid)){
            begin = (mid + 1);
        }else {
            end = (mid - 1);
        }

        mid = (begin + end) / 2;
    }

    return -1;

}

int main() {
    int n; // array size
    cout << "Size of the array: ";
    cin >> n;

    int *arr = new int[n]; // array initialization
    cout << "Elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> *(arr + i); // taking all array elements
    }

    int key;
    cout << "Key: ";
    cin >> key;

    cout << "Key found at index: " << binarySearch(arr, n, key); // clling binarySearch(algo)

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
