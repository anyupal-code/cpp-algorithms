#include <iostream>
#include <vector>

int* first_occurrence(int* arr, int n, int x, int* index) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            *index = i;
            return &arr[i];
        }
    }
    *index = -1;
    return nullptr;
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

    int x;
    std::cin >> x;

    int index;
    int* ptr = first_occurrence(arr.data(), n, x, &index);

    // Первая строка — индекс
    std::cout << index << '\n';

    // Вторая строка — элементы начиная с найденного
    if (ptr != nullptr) {
        for (int* p = ptr; p < arr.data() + n; ++p) {
            std::cout << *p << (p + 1 < arr.data() + n ? " " : "");
        }
        std::cout << '\n';
    }

    return 0;
}