#include <iostream>
#include <vector>

int main() {
    // Файловый ввод-вывод (для сдачи на сайте):
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Терминальный ввод-вывод (по умолчанию):
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<std::vector<int>> m(n, std::vector<int>(n, 0));

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    int dir = 0;
    int r = 0, c = 0;

    for (int num = 1; num <= n * n; ++num) {
        m[r][c] = num;

        int nr = r + dr[dir];
        int nc = c + dc[dir];

        // Если следующая клетка вне границ или уже занята — поворот направо
        if (nr < 0 || nr >= n || nc < 0 || nc >= n || m[nr][nc] != 0) {
            dir = (dir + 1) % 4;
            nr = r + dr[dir];
            nc = c + dc[dir];
        }

        r = nr;
        c = nc;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << m[i][j] << (j == n - 1 ? "" : " ");
        }
        std::cout << '\n';
    }

    return 0;
}