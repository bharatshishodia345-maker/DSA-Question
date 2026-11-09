#include <iostream>
#include <vector>
using namespace std;

int rows, cols;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, vector<vector<int>>& grid,
         vector<vector<bool>>& visited) {

    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {

        int nx = x + dx[i];
        int ny = y + dy[i];

        // Check boundaries, land and visited status
        if (nx >= 0 && nx < rows &&
            ny >= 0 && ny < cols &&
            grid[nx][ny] == 1 &&
            !visited[nx][ny]) {

            dfs(nx, ny, grid, visited);
        }
    }
}

int main() {

    cin >> rows >> cols;

    vector<vector<int>> grid(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (grid[i][j] == 1 && !visited[i][j]) {

                count++;

                dfs(i, j, grid, visited);
            }
        }
    }

    cout << count << endl;

    return 0;
}