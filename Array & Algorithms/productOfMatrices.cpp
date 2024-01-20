#include <iostream>

using namespace std;

// algo for multiplying two matrices
void productOfMatrices(int** a, int** b, int aRows, int bRows, int aCols, int bCols){

    int** resultantMatrix = new int*[aRows];
    for (int i = 0; i < aRows; i++){
        resultantMatrix[i] = new int[bCols];
    }

    int ans = 0;

    for (int i = 0; i < aRows; i++){

        for (int j = 0; j < bCols; j++){

            for (int k = 0; k < aCols; k++){
                
                ans += a[i][k] * b[k][j];

            }

        resultantMatrix[i][j] = ans;
        ans = 0;

        }

    }

    cout << "Resultant Matrix after multiplication:\n";
    for (int i = 0; i < aRows; i++){
        for (int j = 0; j < bCols; j++){
            cout << resultantMatrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < aRows; i++){
        delete[] resultantMatrix[i];
        resultantMatrix[i] = NULL;
    }

    delete[] resultantMatrix;
    resultantMatrix = NULL;

    return;
}

int main() {
    int aRows, bRows, aCols, bCols;
    cout << "Dimensions of first matrix: ";
    cin >> aRows >> aCols;

    cout << "Dimensions of second matrix: ";
    cin >> bRows >> bCols;

    if (aCols != bRows){
        cout << "\nCan't Be Multiplied\n" << endl;
        return 0;
    }

    int** matrixA = new int* [aRows];
    for (int i = 0; i < aRows; i++){
        matrixA[i] = new int[aCols];
    }

    int** matrixB = new int* [bRows];
    for (int i = 0; i < bRows; i++){
        matrixB[i] = new int[bCols];
    }

    cout << "Elements of the first matrix:\n";
    for (int i = 0 ; i < aRows; i++){
        for (int j = 0; j < aCols; j++){
            cin >> matrixA[i][j];
        }
    }

    cout << "Elements of the second matrix:\n";
    for (int i = 0 ; i < bRows; i++){
        for (int j = 0; j < bCols; j++){
            cin >> matrixB[i][j];
        }
    }

    productOfMatrices(matrixA, matrixB, aRows, bRows, aCols, bCols);

    for (int i = 0; i < aRows; i++){
        delete[] matrixA[i];
        matrixA[i] = NULL;
    }

    for (int i = 0; i < bRows; i++){
        delete[] matrixB[i];
        matrixB[i] = NULL;
    }

    delete[] matrixA;
    delete[] matrixB;

    matrixA = matrixB = NULL;

    return 0;
}
