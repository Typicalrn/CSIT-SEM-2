#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class Cell {
public:
    bool isMine;
    bool isRevealed;
    int adjacentMines;

    Cell() {
        isMine = false;
        isRevealed = false;
        adjacentMines = 0;
    }
};

class Board {
private:
    vector<vector<Cell>> grid;
    int rows, cols, mineCount;

    bool isValid(int r, int c) {
        return r >= 0 && r < rows && c >= 0 && c < cols;
    }

    void placeMines() {
        int placed = 0;
        while (placed < mineCount) {
            int r = rand() % rows;
            int c = rand() % cols;
            if (!grid[r][c].isMine) {
                grid[r][c].isMine = true;
                placed++;
            }
        }
    }

    void calculateAdjacency() {
        int dr[] = {-1,-1,-1,0,1,1,1,0};
        int dc[] = {-1,0,1,1,1,0,-1,-1};

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c].isMine) continue;
                int count = 0;
                for (int i = 0; i < 8; i++) {
                    int nr = r + dr[i];
                    int nc = c + dc[i];
                    if (isValid(nr, nc) && grid[nr][nc].isMine) {
                        count++;
                    }
                }
                grid[r][c].adjacentMines = count;
            }
        }
    }

    void revealRecursive(int r, int c) {
        if (!isValid(r, c) || grid[r][c].isRevealed) return;

        grid[r][c].isRevealed = true;

        if (grid[r][c].adjacentMines > 0) return;

        // Recursively reveal adjacent cells
        int dr[] = {-1,-1,-1,0,1,1,1,0};
        int dc[] = {-1,0,1,1,1,0,-1,-1};

        for (int i = 0; i < 8; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (isValid(nr, nc) && !grid[nr][nc].isMine) {
                revealRecursive(nr, nc);
            }
        }
    }

public:
    Board(int r, int c, int mines) : rows(r), cols(c), mineCount(mines) {
        grid.resize(rows, vector<Cell>(cols));
        placeMines();
        calculateAdjacency();
    }

    bool reveal(int r, int c) {
        if (!isValid(r, c) || grid[r][c].isRevealed) return true;

        if (grid[r][c].isMine) {
            grid[r][c].isRevealed = true;
            return false;
        }

        revealRecursive(r, c);
        return true;
    }

    bool isGameWon() {
        for (int r = 0; r < rows; r++)
            for (int c = 0; c < cols; c++)
                if (!grid[r][c].isMine && !grid[r][c].isRevealed)
                    return false;
        return true;
    }

    void display(bool revealAll = false) {
        cout << "   ";
        for (int c = 0; c < cols; c++)
            cout << c << " ";
        cout << endl;

        for (int r = 0; r < rows; r++) {
            cout << r << " |";
            for (int c = 0; c < cols; c++) {
                if (revealAll || grid[r][c].isRevealed) {
                    if (grid[r][c].isMine)
                        cout << "* ";
                    else
                        cout << grid[r][c].adjacentMines << " ";
                } else {
                    cout << "# ";
                }
            }
            cout << endl;
        }
    }
};

class Game {
private:
    Board* board;
    int rows, cols, mines;

public:
    Game(int r, int c, int m) : rows(r), cols(c), mines(m) {
        srand(time(0));
        board = new Board(rows, cols, mines);
    }

    void start() {
        bool alive = true;
        while (alive) {
            board->display();
            int r, c;
            cout << "Enter row and column to reveal: ";
            cin >> r >> c;

            alive = board->reveal(r, c);

            if (!alive) {
                cout << "Game Over! You hit a mine.\n";
                board->display(true);
                break;
            }

            if (board->isGameWon()) {
                cout << "Congratulations! You won!\n";
                board->display(true);
                break;
            }
        }
    }

    ~Game() {
        delete board;
    }
};

int main() {
    int rows, cols, mines;
    cout << "Enter board size (rows cols): ";
    cin >> rows >> cols;
    cout << "Enter number of mines: ";
    cin >> mines;

    Game game(rows, cols, mines);
    game.start();

    return 0;
}
