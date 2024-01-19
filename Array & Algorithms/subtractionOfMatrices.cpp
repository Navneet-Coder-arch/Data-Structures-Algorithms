#include <iostream>

using namespace std;

//algo for subtraction two matrices
void add_Matrix(int** mtx1, int** mtx2, int rows, int cols){

    int** ansMatrix = new int* [rows];

    for (int i = 0; i < rows; i++){
        ansMatrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            ansMatrix[i][j] = mtx1[i][j] - mtx2[i][j];
        }
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << ansMatrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++){
        delete[] ansMatrix[i];
        ansMatrix[i] = NULL;
    }

    delete[] ansMatrix;
    ansMatrix = NULL;

}

int main() {
    int r1, r2, c1, c2;
    cout << "Dimensions of first matrix: ";
    cin >> r1 >> c1;

    cout << "Dimensions of second matrix: ";
    cin >> r2 >> c2;

    if ((r1 != r2) && (c1 != c2)){
        cout << "Dimensions of both matrices are not same. " << endl;
        return 0;
    }

    int** mtx1 = new int* [r1];
    int** mtx2 = new int* [r2];

    for (int i = 0; i < r1; i++){
        mtx1[i] = new int[c1];
        mtx2[i] = new int[c2];
    }

    cout << "Enter the elements of the first matrix in linear way: ";
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cin >> mtx1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix in linear way: ";
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cin >> mtx2[i][j];
        }
    }

    add_Matrix(mtx1, mtx2, r1, r2);

    for (int i = 0; i < r1; i++){
        delete[] mtx1[i];
        delete[] mtx2[i];
        mtx1[i] = mtx2[i] = NULL;
    }

    delete[] mtx1;
    delete[] mtx2;

    mtx1 = mtx2 = NULL;

    return 0;
}
