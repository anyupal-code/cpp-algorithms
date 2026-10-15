#include <iostream>

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int v;
            if (i + j == n - 1) {
                v = 1;       // на побочной диагонали
            } else if (i + j < n - 1) {
                v = 0;       // выше диагонали
            } else {
                v = 2;       // ниже диагонали
            }
            std::cout << v << (j == n - 1 ? "" : " ");
        }
        std::cout << '\n';
    }

    return 0;
}