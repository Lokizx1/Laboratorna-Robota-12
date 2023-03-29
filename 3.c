#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int Q[4][5], sum = 0, D;
    printf("Vveditb chuslo:\n");
    scanf("%d", &D);
    for (int i = 0;i<4;i++){
        for (int j = 0;j<5;j++){
            Q[i][j] = rand()%41 - 20;
        }
    }
    for (int i = 0;i<4;i++){
        for (int j = 0;j<5;j++){
            if (Q[i][j] < D){
                sum += Q[i][j];
            }
        }
    }
    printf("Massiv:\n");
    for (int i = 0;i<4;i++){
        for (int j = 0;j<5;j++){
            printf("%d\t", Q[i][j]);
        }
        printf("\n");
    }
    printf("Summa: %d", sum);
    return 0;
}