#include <iostream>

// Чтение матрицы n x n
int** read_matrix(int n) {
    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    return matrix;
}

// Сумма на побочной диагонали
int find_sum(int** matrix, int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][n - 1 - i];
    }
    return sum;
}

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int** matrix = read_matrix(n);

    std::cout << find_sum(matrix, n) << '\n';

    // Освобождение памяти
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}