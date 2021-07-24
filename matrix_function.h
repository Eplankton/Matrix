void matrixInput(float *);
void matrixAddition();
void matrixSubtraction();
void scalarMultiplication();
void matrixMultiplication();
void matrixTransposition(); //Function declaration

int row = 0, column = 0, temp = 0;
int i = 0, j = 0;

void matrixInput(float *r) //Function to input matrix
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

void matrixAddition() //Function to add two matrix together .
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

    printf("\nThe result of 'A + B' is : \n\n");

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

void matrixSubtraction() //Similar to matrixAddition()
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

    printf("\nThe result of 'A - B' is : \n\n");

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

void scalarMultiplication() //Multiply a scalar on a matrix .
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

    printf("\nThe result of 'a * M' is : \n\n");

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

void matrixMultiplication() //Multiply two matrix together .
{
    printf("\nMode:4 -> Multiplication \n\n");
    printf("\nPlease set the row of the first matrix = ");
    scanf("%d", &row);

    if (row < 1)
    {
        printf("\nError! Please set the row of the first matrix again= ");
        scanf("%d", &row);
    }

    printf("\nPlease set the column of the first matrix = ");
    scanf("%d", &column);
    temp = column;

    if (column < 1)
    {
        printf("\nError! Please set the column of the first matrix again = ");
        scanf("%d", &column);
        temp = column;
    }

    float fst[row][column];
    float *p = &fst[0][0];

    matrixInput(p);

    getchar();

    printf("\n\nThe row of the second matrix has been set as = %d \n", column);

    printf("\nPlease set the column of the second matrix = ");
    scanf("%d", &column);

    if (column < 1)
    {
        printf("\nError! Please set the column of the second matrix again = ");
        scanf("%d", &column);
    }

    float sec[temp][column];
    float result[row][column];
    float *q = &sec[0][0];

    int prov = 0; //Use another variable to transport 'row' .
    prov = row;
    row = temp;

    matrixInput(q);

    int c = 0;
    row = prov;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            for (c = 0; c < temp; c++)
            {
                result[i][j] += (fst[i][c] * sec[c][j]);
            }
        }
    }

    printf("\nThe result of 'A x B' is : \n\n");

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

void matrixTransposition() //Transposition of matrix
{
    printf("\nMode:6 -> matrixTransposition \n\n");
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
    float *p = &fst[0][0];
    matrixInput(p);

    float result[column][row];

    for (i = 0; i <= row; i++)
    {
        for (j = 0; j <= column; j++)
        {
            result[i][j] = fst[j][i];
        }
    }

    printf("\nThe result of 'A ^ T' is : \n\n");

    for (j = 0; j < column; j++)
    {
        for (i = 0; i < row; i++)
        {
            if (i > 0)
                printf(" %g ", result[j][i]);
            else
                printf("[ %g ", result[j][i]);
        }
        printf("]\n");
    }
}
