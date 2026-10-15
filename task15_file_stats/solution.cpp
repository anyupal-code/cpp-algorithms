#include <iostream>

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    char ch, lastCh = 0;
    long long letters = 0, words = 0, lines = 0;
    bool inWord = false;
    bool hasContent = false;

    while (std::cin.get(ch)) {
        hasContent = true;

        bool isLetter = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');

        if (isLetter) {
            ++letters;
            inWord = true;
        } else {
            if (inWord) {
                ++words;
                inWord = false;
            }
        }

        if (ch == '\n') {
            ++lines;
        }

        lastCh = ch;
    }

    // Закрываем последнее слово, если файл не заканчивается не-буквой
    if (inWord) {
        ++words;
    }

    // Если файл не заканчивается переводом строки — добавляем последнюю строку
    if (hasContent && lastCh != '\n') {
        ++lines;
    }

    std::cout << "Input file contains:\n";
    std::cout << letters << " letters\n";
    std::cout << words   << " words\n";
    std::cout << lines   << " lines\n";

    return 0;
}