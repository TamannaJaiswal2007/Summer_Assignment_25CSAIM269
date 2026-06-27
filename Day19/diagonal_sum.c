#include<stdio.h>
int main(){
   int n, i, j, sum = 0;

    printf("enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("enter matrix:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j <n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        sum = sum + a[i][i];
    }
    printf("diagonal sum = %d", sum);
    return 0;
}