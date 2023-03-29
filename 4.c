#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int A[6][4], max = 0, max_i, max_j;
    for (int i = 0;i<6;i++){
        for (int j = 0;j<4;j++){
            A[i][j] = rand()%41 - 20;
        }
    }
    printf("Massiv:\n");
    for (int i = 0;i<6;i++){
        for (int j = 0;j<4;j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    for (int i = 0;i<6;i++){
        for (int j = 0;j<4;j++){
            if (abs(A[i][j]) > max){
                max = abs(A[i][j]);
                max_i = i;
                max_j = j;
            }
        }
    }
    printf("Naybilsche znachenya elmenta za modulem v masuvi: %d\n", max);
    printf("Indecsu naybilschogho znachenya:i=%d\nj=%d", max_i, max_j);
    return 0;
}