#include <iostream>

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int x;
    while (std::cin >> x && x != -1) {
        bool first = true;
        for (int i = 0; i <= x; i += 2) {
            if (!first) std::cout << ' ';
            std::cout << i;
            first = false;
        }
        std::cout << '\n';
    }

    return 0;
}