#include <iostream>
#include <vector>
#include "sudoku.h"
using namespace std;

int main (void) {
    int seed[] = {0, 0, 0, 5, 0, 1, 0, 0, 3,
                  6, 8, 0, 0, 0, 9, 5, 4, 0,
                  5, 0, 0, 7, 0, 0, 0, 0, 2,
                  7, 9, 8, 0, 0, 0, 0, 0, 0,
                  0, 6, 0, 3, 0, 8, 0, 9, 0,
                  0, 0, 0, 0, 0, 0, 8, 6, 5,
                  3, 0, 0, 0, 0, 7, 0, 0, 6,
                  0, 7, 2, 6, 0, 0, 0, 3, 9,
                  9, 0, 0, 1, 0, 3, 0, 0, 0};
    // load the seed into sudoku object
    Sudoku sudoku(vector <int> (seed, seed + 81));

    sudoku.printBoard();

    return 0;
}