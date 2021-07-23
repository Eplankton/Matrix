// Date: 2021/7/23  From: Eplankton

#include <stdio.h> 
void matrixInput(float *);void matrixAddition();
void matrixSubtraction();void scalarMultiplication();

int row = 0, column = 0;
int i = 0, j = 0;

int main()
{
    int key = 1; // User Interface

    for (; key > 0;)
    {
        printf("\n\n");
        printf("                          #############################\n");
        printf("                                   @ Matrix            \n");
        printf("                                                       \n");
        printf("                                     A + B         :1  \n");
        printf("                                     A - B         :2  \n");
        printf("                                     a * M         :3  \n");
        printf("                                     A x B         :4  \n");
        printf("                                     Det(A)        :5  \n");
        printf("                                     Exit          :0  \n");
        printf("                                                       \n");
        printf("                          #############################\n");
        printf("                           Please enter : ");
        scanf("%d", &key);

        switch (key)
        {
        case 1:
            matrixAddition();
            break;
        case 2:
            matrixSubtraction();
            break;
        case 3:
            scalarMultiplication();
            break;
        case 0:
            break;
        }
    }            //

    return 0;
}

void matrixInput(float *r)
{
    char matrixName;
    getchar();
    printf("\n\nSet the matrix name as :  ");
    scanf("%c", &matrixName);
    printf("\n");

    printf("\nYour matrix :  %c < %d, %d > \n\n", matrixName, row, column);

    float a[row][column];
    int m = 0, n = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            a[i][j] = 0;
        }
    }

    for (m = 0; m < row; m++)
    {
        for (n = 0; n < column; n++)
        {
            printf(" %g ", a[m][n]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("\nThe row(%d)column(%d) = ", i + 1, j + 1);
            scanf("%g", &a[i][j]);
            *r = a[i][j];
            r = r + 1;
            printf("\n");

            for (m = 0; m < row; m++)
            {
                for (n = 0; n < column; n++)
                {
                    printf(" %g ", a[m][n]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }

    printf("\nMatrix %c < %d, %d > should be like this : \n\n", matrixName, row, column);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (j > 0)
                printf(" %g ", a[i][j]);
            else
                printf("[ %g ", a[i][j]);
        }
        printf("]\n");
    }
}

void matrixAddition()
{
    printf("\nMode:1 -> Addition \n\n");
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
    float fst[row][column];
    float *p = &fst[0][0];
    matrixInput(p);

    getchar();

    printf("\n\nPlease set the row of the second matrix = ");
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
    float sec[row][column];
    float *q = &sec[0][0];
    matrixInput(q);

    float result[row][column];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            result[i][j] = fst[i][j] + sec[i][j];
        }
    }

    printf("\nThe result is : \n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (j > 0)
                printf(" %g ", result[i][j]);
            else
                printf("[ %g ", result[i][j]);
        }
        printf("]\n");
    }
}

void matrixSubtraction()
{
    printf("\nMode:2 -> Subtraction \n\n");
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
    float fst[row][column];
    float *p = &fst[0][0];
    matrixInput(p);

    getchar();

    printf("\n\nPlease set the row of the second matrix = ");
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
    float sec[row][column];
    float *q = &sec[0][0];
    matrixInput(q);

    float result[row][column];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            result[i][j] = fst[i][j] - sec[i][j];
        }
    }

    printf("\nThe result is : \n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (j > 0)
                printf(" %g ", result[i][j]);
            else
                printf("[ %g ", result[i][j]);
        }
        printf("]\n");
    }
}

void scalarMultiplication()
{
    printf("\nMode:3 -> Scalar Multiplication \n\n");
    printf("\nPlease set the row of the matrix = ");
    scanf("%d", &row);
    if (row < 1)
    {
        printf("\nError! Please set the row of the matrix again= ");
        scanf("%d", &row);
    }
    printf("\nPlease set the column of the matrix = ");
    scanf("%d", &column);
    if (column < 1)
    {
        printf("\nError! Please set the column of the matrix again = ");
        scanf("%d", &column);
    }
    float fst[row][column];
    float u = 0;
    float *p = &fst[0][0];
    matrixInput(p);

    printf("\n\nPlease set the scalar = ");
    scanf("%g", &u);

    float result[row][column];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            result[i][j] = u * fst[i][j];
        }
    }

    printf("\nThe result is : \n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (j > 0)
                printf(" %g ", result[i][j]);
            else
                printf("[ %g ", result[i][j]);
        }
        printf("]\n");
    }
}
