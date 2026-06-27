#include<stdio.h>
int main() {
    int r, c, i, j;
    printf("enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], sub[r][c];

    printf("enter first matrix:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter second matrix:\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("subtraction of matrix: ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            sub[i][j] = a[i][j] + b[i][j];
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}