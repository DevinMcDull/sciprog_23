#include <stdio.h>



int isMagicSquare(int** square, const int n) {
    
    if (n < 0) {
        return 0;
    }

    


    int M = (n * (n * n + 1)) / 2;
    printf("M=%d\n", M);
    int i, j;

    
    for (i = 0; i < n; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (j = 0; j < n; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }
        printf("i=%d, rowSum=%d, colSum=%d\n", i, rowSum, colSum);
        if (rowSum != M || colSum != M) {
            return 0;
        }
    }
    int diagSum = 0;
    int secDiagSum = 0;
    for (i = 0; i < n; i++) {
        diagSum += square[i][i];
        secDiagSum += square[i][n - i + 1];
    }
    printf("diagSum=%d, secDiagSum = %d\n", diagSum, secDiagSum);
    if (diagSum != M || secDiagSum != M) {
        return 0;

    }
   
    return 1;
}
