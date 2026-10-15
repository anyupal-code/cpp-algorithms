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

    std::vector<std::vector<int>> a(n, std::vector<int>(n, 0));

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    int r = 0, c = 0, d = 0;

    while (true) {
        a[r][c] = 1;

        int nr  = r + dr[d];
        int nc  = c + dc[d];
        int nnr = r + 2 * dr[d];
        int nnc = c + 2 * dc[d];

        bool canGo = (nr >= 0 && nr < n && nc >= 0 && nc < n && a[nr][nc] == 0)
                  && (nnr < 0 || nnr >= n || nnc < 0 || nnc >= n || a[nnr][nnc] == 0);

        if (!canGo) {
            d = (d + 1) % 4;
            nr  = r + dr[d];
            nc  = c + dc[d];
            nnr = r + 2 * dr[d];
            nnc = c + 2 * dc[d];

            canGo = (nr >= 0 && nr < n && nc >= 0 && nc < n && a[nr][nc] == 0)
                 && (nnr < 0 || nnr >= n || nnc < 0 || nnc >= n || a[nnr][nnc] == 0);
        }

        if (!canGo) break;

        r = nr;
        c = nc;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << a[i][j];
        }
        std::cout << '\n';
    }

    return 0;
}
