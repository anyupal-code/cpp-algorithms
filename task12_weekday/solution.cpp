#include <iostream>
#include <string>

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::string days[] = {"", "mon", "tue", "wed", "thu", "fri", "sat", "sun"};

    std::cout << days[n] << '\n';

    return 0;
}