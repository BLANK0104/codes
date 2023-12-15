#include <iostream>
#include <vector>//for path making
#include <queue>//for storing path
#include<algorithm>//revesre

using namespace std;

const int ROWS = 5;
const int COLS = 5;

int maze[ROWS][COLS] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 1, 0}
};

void printMaze() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (maze[i][j] == 1) {
                cout << "# ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
}

bool isValid(int row, int col) {    //for showing which path is valid and which is not
    return row >= 0 && row < ROWS && col >= 0 && col < COLS && maze[row][col] == 0;
}

vector<pair<int, int>> solveMaze(pair<int, int> start, pair<int, int> end) {
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(ROWS, vector<bool>(COLS, false));  //shows nodes which we have visited

    q.push(start);  //stores which node we have visited 
    visited[start.first][start.second] = true;

    vector<vector<pair<int, int>>> parent(ROWS, vector<pair<int, int>>(COLS, {-1, -1}));  //set limits

    vector<pair<int, int>> directions = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};  //shows direction

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        if (curr == end) {
            break;
        }

        for (auto& dir : directions) {
            int row = curr.first + dir.first;
            int col = curr.second + dir.second;
            if (isValid(row, col) && !visited[row][col]) {
                q.push({row, col});
                visited[row][col] = true;
                parent[row][col] = curr;
            }
        }
    }
    vector<pair<int, int>> path;
    pair<int, int> curr = end;
    while (curr != start) {
        path.push_back(curr);
        curr = parent[curr.first][curr.second];
    }
    path.push_back(start);
    reverse(path.begin(), path.end());

    return path;
}

int main() {
    pair<int, int> start = {0, 0};
    pair<int, int> end = {ROWS - 1, COLS - 1};

    cout << "Maze:" << endl;
    printMaze();

    vector<pair<int, int>> path = solveMaze(start, end);
    cout << "Path:" << endl;
    for (auto& p : path) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}