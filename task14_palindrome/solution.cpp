#include <iostream>
#include <string>

// Проверка строки на палиндром без учёта пробелов
bool isPalindrome(const std::string& s) {
    int left = 0;
    int right = (int)s.length() - 1;

    while (left < right) {
        // Пропускаем пробелы слева
        while (left < right && s[left] == ' ') ++left;
        // Пропускаем пробелы справа
        while (left < right && s[right] == ' ') --right;

        if (s[left] != s[right]) return false;

        ++left;
        --right;
    }
    return true;
}

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    std::string s;
    std::getline(std::cin, s);

    std::cout << (isPalindrome(s) ? "yes" : "no") << '\n';

    return 0;
}