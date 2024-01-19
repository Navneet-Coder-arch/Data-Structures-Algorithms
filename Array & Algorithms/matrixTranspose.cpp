#include <iostream>

using namespace std;

//algo for tranposing
void transposeMatrix(int** matrix, int rows, int cols){
    
    int** transposedMatrix = new int* [cols];

    for (int i = 0; i < cols; i++){
        transposedMatrix[i] = new int[rows];
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed Matrix: " << endl;
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < rows; j++){
            cout << transposedMatrix[i][j] << " ";
        }cout << endl;
    }

    for (int i = 0; i < cols; i++){
        delete[] transposedMatrix[i];
        transposedMatrix[i] = NULL;
    }

    delete[] transposedMatrix;
    transposedMatrix = NULL;

    return;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows of matrix: ";
    cin >> rows;

    cout << "Enter the number of columns of matrix: ";
    cin >> cols;

    int** matrix = new int*[rows];

    for (int i = 0; i < rows; i++){
        matrix[i] = new int[cols];
    }

    cout << "Enter the elements of the matix in linear a way: ";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    transposeMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++){
        delete[] matrix[i];
        matrix[i] = NULL;
    }

    delete[] matrix;
    matrix = NULL;

    return 0;
}
