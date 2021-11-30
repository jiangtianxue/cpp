#include <iostream>
using namespace std;

/*  首先编译cpp文件成为可执行文件，例如test9.exe
    然后在命令行输入 ./test9.exe < CheckSudokuSolution.txt
    就可以调用txt文件来执行程序 */


/*  检查数独问题    */
void readASolution(int grid[][9]);
bool isValid(const int grid[][9]);
bool isValid(int i, int j, const int grid[][9]);

int main(){
    int grid[9][9];
    readASolution(grid);

    cout << ((isValid(grid)) ? "valid solution!" : "invalid solution!") << endl;

    return 0;
}

void readASolution(int grid[][9]){
    cout << "enter a sudoku solution: " << endl;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> grid[i][j];
        }
    }
}

bool isValid(const int grid[][9]){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (grid[i][j] < 1 || grid[i][j] > 9 || !isValid(i, j, grid)){
                return false;
            }
        }
    }
    return true;
}

bool isValid(int i, int j, const int grid[][9]){
    for (int column = 0; column < 9; column++){
        if (column != j && grid[i][column] == grid[i][j]){
            return false;
        }
    }

    for (int row = 0; row < 9; row++){
        if (row != i && grid[row][j] == grid[i][j]){
            return false;
        }
    }

    for (int row = (i / 3) * 3; row < (i / 3) * 3 + 3; row++){
        for (int col = (j / 3) * 3; col < (j / 3) * 3 + 3; col++){
            if (row != i && col != j && grid[row][col] == grid[i][j]){
                return true;
            }
        }
    }

    return true;
}

