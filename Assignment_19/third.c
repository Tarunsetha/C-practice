//Q3>Write a program to print the transpose of a given matrix?
#include <stdio.h>
int main()
{
    int A[10][10], transpose[10][10];

    int i, j, row, col;
    printf("enter the row and col number: ");
    scanf("%d%d", &row, &col);

    printf("enter the array elemnet number: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
     for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
   
        {
           transpose[j][i]= A[i][j];
        }
    }

       printf("\nTranspose of the matrix:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }


    return 0;
}
