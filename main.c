#include <stdio.h>
#include <string.h>
#include "matrix_function.h"

int main()
{
    int key = 1; // User Interface

    while (key > 0)
    {
        printf("\n\n");
        printf("                          ############################\n");
        printf("                                   @ Matrix            \n");
        printf("                                                       \n");
        printf("                                     A + B         :1  \n");
        printf("                                     A - B         :2  \n");
        printf("                                     a * M         :3  \n");
        printf("                                     A x B         :4  \n");
        printf("                                     Det(A)        :5  \n");
        printf("                                     A ^ T         :6  \n");
        printf("                                     Exit          :0  \n");
        printf("                                                       \n");
        printf("                          ############################\n");
        printf("                          Please enter : ");
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
        case 4:
            matrixMultiplication();
            break;
        case 5:
            matrixDeterminant();
            break;
        case 6:
            matrixTransposition();
            break;
        case 0:
            break;
        }
    }

    return 0;
}
