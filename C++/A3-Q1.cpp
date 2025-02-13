#include <iostream>
using namespace std;
class Matrix {
private:
    int m, n;
    int** matrix;
public:
    Matrix(int rows, int cols) : m(rows), n(cols) {
        matrix = new int*[m];
        for (int i = 0; i < m; ++i) {
            matrix[i] = new int[n];
        }
    }
    ~Matrix() {
        for (int i = 0; i < m; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
    void setData() {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }
    }
    void printData() const {
        cout << "Matrix elements:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator+(const Matrix& other) const {
        Matrix result(m, n);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }
    Matrix operator*(const Matrix& other) const {
        Matrix result(m, other.n);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < other.n; ++j) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < n; ++k) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }
};
int main() {
    int m, n;
    cout << "Enter dimensions of matrices (m n): ";
    cin >> m >> n;
    Matrix matrix1(m, n);
    Matrix matrix2(m, n);
    cout << "Enter elements for first matrix:" << endl;
    matrix1.setData();
    cout << "Enter elements for second matrix:" << endl;
    matrix2.setData();
    Matrix additionResult = matrix1 + matrix2;
    cout << "Result of addition:" << endl;
    additionResult.printData();
    cout << "Result of multiplication:" << endl;
    Matrix multiplicationResult = matrix1 * matrix2;
    multiplicationResult.printData();
    return 0;
}