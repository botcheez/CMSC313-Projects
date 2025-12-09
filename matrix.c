#include <stdio.h>

void matmult(int result[3][3], int first[3][3], int second[3][3]) {
    //loop to go through 2d matrix items
    for (int i = 0; i < 3; i++) {//goes through first index i of matrix
        for (int j = 0; j < 3; j++) {//goes through second index j of matrix
            result[i][j] = 0; //resulting matrix
            for (int k = 0; k < 3; k++) {
                result[i][j] += first[i][k] * second[k][j]; //add the multiplied values to the resulting matrix
            }
        }
    }
}

void matadd(int result[3][3], int first[3][3], int second[3][3]) {
    //loop to go through 2d matrix items
    for (int i = 0; i < 3; i++) {//goes through first index i of matrix
        for (int j = 0; j < 3; j++) { //goes through second index j of matrix
            result[i][j] = first[i][j] + second[i][j]; //add the summed values to the resulting matrix
        }
    }
}

//main driver
int main(void) {
    int A[3][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};

    int B[3][3] = {{1, 2, 0},
                  {3, 4, 5},
                  {0, 6, 7}};

    int AB[3][3];
    int ABplusA[3][3];

    matmult(AB, A, B);      //AB = A * B
    matadd(ABplusA, AB, A); //ABplusA = AB + A

    printf("A =\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("]\n");//new line
    }

    printf("\nB =\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("]\n");
    }

    printf("\nA * B + A =\n");
    for (int i = 0; i < 3; i++) {
        printf("[ ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", ABplusA[i][j]);
        }
        printf("]\n");//new line
    }

    return 0;
}
