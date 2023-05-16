#include <stdio.h>

int main() {
  int matrix[3][3] = { {1, 3, 5}, {2, 4, 6}, {3, 5, 7} };
  int matrix2[3][3] = { {1, 2, 3}, {3, 6, 9}, {5, 7, 8} };

  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf ("%2d ", matrix[i][j]+matrix2[i][j]);
      
    }
    printf ("\n");
  }
  return 0;
}
