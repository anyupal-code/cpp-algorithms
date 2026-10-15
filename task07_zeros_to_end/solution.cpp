#include <iostream>
#include <vector>

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Метод двух указателей
    int i = 0;
    for (int j = 0; j < n; ++j) {
        if (arr[j] != 0) {
            arr[i] = arr[j];
            ++i;
        }
    }
    // Оставшиеся позиции заполняем нулями
    while (i < n) {
        arr[i] = 0;
        ++i;
    }

    for (int k = 0; k < n; ++k) {
        std::cout << arr[k] << (k == n - 1 ? "" : " ");
    }
    std::cout << '\n';

    return 0;
}