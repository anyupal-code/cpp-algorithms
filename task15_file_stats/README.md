# Задача 15. Количество линий, слов и символов

## Условие

Программа получает файл в качестве входных данных. Определите, сколько
в файле букв (латинского алфавита), слов и строк. Выведите три
полученных числа в формате, приведённом в примере. Слово — это
последовательность букв латинского алфавита.

Чтобы сэкономить память, читайте файл посимвольно, то есть не сохраняйте
в памяти ни весь файл, ни его отдельные строки.

## Идея решения

Читаем файл посимвольно через `std::cin.get(ch)`. Считаем:
- **буквы** — символы `a-z` или `A-Z`;
- **слова** — с помощью флага `inWord`: слово начинается с буквы
  и заканчивается на первой не-букве;
- **строки** — считаем символы `'\n'`; если файл не заканчивается
  переводом строки, добавляем ещё одну строку.

## Ввод

Текстовый файл. В терминальном режиме — ввод с клавиатуры
(завершается `Ctrl+D`).

## Вывод

Три числа в формате:

```
Input file contains:
<N> letters
<M> words
<K> lines
```

## Пример 1

Ввод:
```
Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
```

Вывод:
```
Input file contains:
108 letters
20 words
4 lines
```

## Пример 2

Ввод:
```
Tau Ceti is a star in the constellation
although it has only about 78% of the Si
from the Solar System, it is a relative
so is thought to be less likely to host
than 10 times as much dust surrounding
The star appears stable, with little st
```

Вывод:
```
Input file contains:
384 letters
88 words
6 lines
```

## Пример 3

Ввод:
```
Grand_Coulee Dam is a gravity dam on th
```

Вывод:
```
Input file contains:
121 letters
26 words
1 lines
```

## Как запустить

### В терминале

```bash
g++ -std=c++23 -O2 solution.cpp -o solution
./solution
```

Программа ждёт ввод. Набери текст, затем нажми **Ctrl+D** (Linux/macOS)
— это сигнал «конец файла».

### С файлом

```bash
./solution < input.txt
```

## Ограничения

- Время: 1 сек
- Память: 64 МБ