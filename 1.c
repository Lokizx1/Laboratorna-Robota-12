#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n, m, i, j;
    printf("Enter Size:");
    scanf("%d", &n);
    m=n;
    int A[n][m];
    for (i = 0;i<n;i++){
        for (j = 0;j<n;j++){
            A[i][j] = rand()%41 - 20;
        }
    }
    for (i = 0;i<n;i++){
        for (j = 0;j<n;j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    for (i = 0;i<n;i++){
        A[i][i] = 0;
    }
    printf("Zmineny massiv:\n");
    for (i = 0;i<n;i++){
        for (j = 0;j<n;j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}