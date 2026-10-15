#include <iostream>
#include <vector>

// Печать массива через пробел
void print(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i];
        if (i < n - 1) std::cout << ' ';
    }
    std::cout << '\n';
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

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    print(arr.data(), n);

    return 0;
}