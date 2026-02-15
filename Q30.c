/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1*/
void setZeroes(int** mat, int r, int* colSize) {
    int c = *colSize;
    int r0 = 0;
    int c0 = 0;

    for (int j = 0; j < c; j++) {
        if (mat[0][j] == 0) {
            r0 = 1;
            break;
        }
    }

    for (int i = 0; i < r; i++) {
        if (mat[i][0] == 0) {
            c0 = 1;
            break;
        }
    }

    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            if (mat[i][j] == 0) {
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < r; i++) {
        for (int j = 1; j < c; j++) {
            if (mat[i][0] == 0 || mat[0][j] == 0) {
                mat[i][j] = 0;
            }
        }
    }

    if (r0) {
        for (int j = 0; j < c; j++) {
            mat[0][j] = 0;
        }
    }

    if (c0) {
        for (int i = 0; i < r; i++) {
            mat[i][0] = 0;
        }
    }
}