#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

// Устойчивая сортировка вставками
void stable_sort(int* arr, int n, int (*comparator)(int, int)) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        // Сдвигаем элементы, которые должны идти после key
        while (j >= 0 && comparator(arr[j], key) > 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Компаратор 1: по возрастанию
int comp1(int a, int b) { return a - b; }

// Компаратор 2: по убыванию
int comp2(int a, int b) { return b - a; }

// Компаратор 3: по длине числа
int comp3(int a, int b) {
    int la = (int)std::to_string(std::abs(a)).length();
    int lb = (int)std::to_string(std::abs(b)).length();
    return la - lb;
}

// Компаратор 4: сначала чётные, потом нечётные
int comp4(int a, int b) {
    return (a % 2 + 2) % 2 - (b % 2 + 2) % 2;
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

    int type;
    std::cin >> type;

    int (*comparator)(int, int) = nullptr;
    switch (type) {
        case 1: comparator = comp1; break;
        case 2: comparator = comp2; break;
        case 3: comparator = comp3; break;
        case 4: comparator = comp4; break;
    }

    if (comparator) {
        stable_sort(arr.data(), n, comparator);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << '\n';

    return 0;
}