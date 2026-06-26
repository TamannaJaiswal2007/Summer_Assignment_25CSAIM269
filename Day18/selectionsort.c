#include<stdio.h>
int main() {
    int n, j, i, temp, min;

    printf("enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n-1; i++){
        min = i;

        for(j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }
    }
    printf("sorted array:\n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}