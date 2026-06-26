#include<stdio.h>
int main() {
    int n, j, i, temp;

    printf("enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n - i; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("sorted array:\n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}