#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Matris yazdırma fonksiyonu
void write(int** A, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// Matris transpozesi fonksiyonu
int** transpose(int** A, int row, int col) {
    // Transpoze matris için yeni dinamik alan aç
    int** T = new int*[col];      // Transpoze satır sayısı = orjinal sütun sayısı
    for (int i = 0; i < col; i++) {
        T[i] = new int[row];      // Transpoze sütun sayısı = orjinal satır sayısı
    }

    // Elemanları transpoze et
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            T[j][i] = A[i][j];
        }
    }

    return T;
}

int main() {
    srand(time(NULL));
    int row, col;
    cout << "Enter row count: ";
    cin >> row;
    cout << "Enter column count: ";
    cin >> col;

    // Dinamik 2D dizi oluştur
    int** A = new int*[row];
    for (int i = 0; i < row; i++) {
        A[i] = new int[col];
    }

    // Matrisi rastgele sayılarla doldur
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            A[i][j] = rand() % 10;
        }
    }

    cout << "\nOriginal Matrix:\n";
    write(A, row, col);

    // Transpoze matris oluştur
    int** T = transpose(A, row, col);

    cout << "\nTransposed Matrix:\n";
    write(T, col, row);

    // Dinamik belleği temizle
    for (int i = 0; i < row; i++) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < col; i++) {
        delete[] T[i];
    }
    delete[] T;

    return 0;
}
