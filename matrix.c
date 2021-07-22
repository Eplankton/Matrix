//  Date: 2021/7/22     From: Eplankton

#include <stdio.h>
void matrixInput();
int row = 0, column = 0;

int main()
{
    printf("\nPlease set the row of your matrix = ");
    scanf("%d", &row);
    if (row < 1)
    {
        printf("\nError! Please set the row of your matrix again= ");
        scanf("%d", &row);
    }
    printf("\nPlease set the column of your matrix = ");
    scanf("%d", &column);
    if (column < 1)
    {
        printf("\nError! Please set the column of your matrix again = ");
        scanf("%d", &column);
    }
    matrixInput();
}

void matrixInput()
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

    printf("\nYour matrix %c< %d, %d > should be  like this : \n\n", matrixName, row, column);

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
