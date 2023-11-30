#include <stdio.h>
#include <stdbool.h>
#define N 10
int board[N][N];
int solutions = 0;
void printSolution(int n) {
   printf("Solution %d:\n", solutions + 1);
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           if (board[i][j] == 1)
               printf("Q ");
           else
               printf("x ");
       }
       printf("\n");
   }
   printf("\n");
}
bool isSafe(int row, int col, int n) {
   for (int i = 0; i < col; i++) {
       if (board[row][i] == 1)
           return false;
   }
   for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
       if (board[i][j] == 1)
           return false;
   }
   for (int i = row, j = col; i < n && j >= 0; i++, j--) {
       if (board[i][j] == 1)
           return false;
   }
 
   return true;
}
void solveNQueens(int col, int n) {
   if (col >= n) {
       printSolution(n);
       solutions++;
       return;
   }
for (int i = 0; i < n; i++) {
       if (isSafe(i, col, n)) {
           board[i][col] = 1;
           solveNQueens(col + 1, n);
           board[i][col] = 0;
       }
   }
}
int main() {
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);
if (n <= 0 || n > N) {
       printf("Invalid value of n.\n");
       return 1;
   }
solveNQueens(0, n);
   printf("Total solutions: %d\n", solutions);
 
   return 0;
}
