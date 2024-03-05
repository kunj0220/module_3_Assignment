#include <stdio.h>
int main()
{
  int i, j, k, l;
  int matrix[100][100];
  int max;

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d",&i,&j);

  printf("Enter the elements of the matrix\n");

    for (k = 0; k < i; k++)
     for(l = 0; l < j; l++)
      scanf("%d", &matrix[k][l]);

  max = matrix[0][0];

  for (k = 0; k < i; k++)
    for (l = 0; l < j; l++)
      if (matrix[k][l] > max)
        max = matrix[k][l];

  printf("Maximum element in the matrix is %d\n", max);

  return 0;
}
