#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<long long>> a(n, std::vector<long long>(m, 0));

    long long cur = 0;
    // Диагонали: k = i + j, от 0 до n + m - 2
    for (int k = 0; k <= n + m - 2; ++k) {
        // Диапазон i на диагонали k
        int i_start = std::max(0, k - (m - 1));
        int i_end   = std::min(n - 1, k);

        // Идём сверху вниз по диагонали
        for (int i = i_start; i <= i_end; ++i) {
            int j = k - i;
            a[i][j] = cur++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << a[i][j] << (j == m - 1 ? "" : " ");
        }
        std::cout << '\n';
    }

    return 0;
}