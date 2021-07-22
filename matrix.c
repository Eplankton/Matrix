//  Date: 2021/7/22     From: Eplankton

#include <stdio.h>
void matrixInput(int *);
int row = 0, column = 0;

int main()
{
    printf("\nPlease set the row of the first matrix = ");
    scanf("%d", &row);
    if (row < 1)
    {
        printf("\nError! Please set the row of the first matrix again= ");
        scanf("%d", &row);
    }
    printf("\nPlease set the column of the first matrix = ");
    scanf("%d", &column);
    if (column < 1)
    {
        printf("\nError! Please set the column of the first matrix again = ");
        scanf("%d", &column);
    }
    int fst[row][column];
    int *p = &fst[0][0];
    matrixInput(p);

    getchar();

    printf("\nPlease set the row of the second matrix = ");
    scanf("%d", &row);
    if (row < 1)
    {
        printf("\nError! Please set the row of the second matrix again= ");
        scanf("%d", &row);
    }
    printf("\nPlease set the column of the second matrix = ");
    scanf("%d", &column);
    if (column < 1)
    {
        printf("\nError! Please set the column of the second matrix again = ");
        scanf("%d", &column);
    }
    int sec[row][column];
    int *q = &sec[0][0];
    matrixInput(q);
}

void matrixInput(int *r)
{
    char matrixName;
    getchar();
    printf("\n\nSet the matrix name as =  ");
    scanf("%c", &matrixName);
    printf("\n");

    printf("\nYour matrix should be %c < %d, %d > \n", matrixName, row, column);

    int a[row][column];
    int i = 0, j = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            a[i][j] = 0;
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("\nThe row(%d)column(%d) = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            *r = a[i][j];
            r = r + 1;
            printf("\n");

            int m = 0, n = 0;

            for (m = 0; m < row; m++)
            {
                for (n = 0; n < column; n++)
                {
                    printf(" %d ", a[m][n]);
                }
                printf("\n");
            }
        }

        printf("\n");
    }

    printf("\nMatrix %c< %d, %d > should be like this : \n\n", matrixName, row, column);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (j > 0)
                printf(" %d ", a[i][j]);
            else
                printf("[ %d ", a[i][j]);
        }
        printf("]\n");
    }
}
