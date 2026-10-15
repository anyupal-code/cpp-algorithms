# Учебные задачи по C++

Сборник решений 15 учебных задач по курсу C++23.

Каждая задача — в отдельной папке со своим README, CMake-файлом и решением.

## Структура проекта

```
taskNN_xxx/
├── README.md          ← условие, идея решения, ввод/вывод, пример
├── CMakeLists.txt     ← сборка одной цели
└── solution.cpp       ← чистый код решения
```

Тесты не хранятся в проекте — проверка через терминал вручную
(см. раздел «Как запустить» в README каждой задачи).

## Список задач

| № | Папка | Задача |
|---|-------|--------|
| 1 | [task01_spiral](task01_spiral/) | Спираль C++23 |
| 2 | [task02_pascal](task02_pascal/) | Треугольник Паскаля |
| 3 | [task03_side_diag](task03_side_diag/) | Побочная диагональ |
| 4 | [task04_sort](task04_sort/) | Квадратичная сортировка C++23 |
| 5 | [task05_first_occurrence](task05_first_occurrence/) | Первое вхождение C++23 |
| 6 | [task06_stable_sort](task06_stable_sort/) | Сортировки C++23 |
| 7 | [task07_zeros_to_end](task07_zeros_to_end/) | Нули в конец C++23 |
| 8 | [task08_print](task08_print/) | Печать C++23 |
| 9 | [task09_even_arrays](task09_even_arrays/) | Чётные массивы C++23 |
| 10 | [task10_side_diag_sum](task10_side_diag_sum/) | Побочная диагональ C++23 |
| 11 | [task11_snail](task11_snail/) | Улитка |
| 12 | [task12_weekday](task12_weekday/) | Название дня недели C++23 |
| 13 | [task13_diagonals](task13_diagonals/) | Заполнение диагоналями |
| 14 | [task14_palindrome](task14_palindrome/) | Палиндром |
| 15 | [task15_file_stats](task15_file_stats/) | Количество линий, слов и символов |

## Сборка

```bash
cmake -S . -B build
cmake --build build
```

Бинарники окажутся в `build/bin/`.

Собрать только одну задачу:

```bash
cmake --build build --target task01_spiral
```

## Запуск

```bash
./build/bin/task01_spiral
```

Программа ждёт ввод с клавиатуры.

## Шаблон решения

Каждое `solution.cpp` начинается с закомментированного файлового
ввода-вывода (для сдачи на сайт) и активного терминального режима:

```cpp
#include <iostream>

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    // ... решение ...

    return 0;
}
```

**Правило:** при сдаче на сайт раскомментировать `freopen`, локально —
оставить как есть.

## Требования

- CMake ≥ 3.20
- Компилятор с поддержкой C++23 (Clang ≥ 18, GCC ≥ 13)

## Лицензия

MIT — см. [LICENSE](LICENSE).