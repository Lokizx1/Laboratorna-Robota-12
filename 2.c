#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int n, sum = 0;
    printf("Vveditb rozmir massivy:");
    scanf("%d", &n);
    int A[n][n];
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            A[i][j] = rand()%21 - 10;
        }
    }
    printf("\nMassiv:\n");
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    } 
    for (int i = 0;i<n;i++){
        sum += A[i][i];
    }
    printf("Summa diachonalinux elementiv: %d", sum);
    printf("\nElementu vdvichi bilschi za summy diaghonalbnux elementiv:"); 
    for (int i = 0;i<n;i++){
        for (int j = 0;j<n;j++){
            if (A[i][j] > 2 * sum){
                printf("%d\n", A[i][j]);
            }
        }
    }
    return 0;
}
