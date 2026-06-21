#include<stdio.h>
int main() {
    int a[10] , n, i, sum = 0;
    float avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = (float)sum / n;
    printf("Sum of the elements in the array is: %d\n", sum);
    printf("Average of the elements in the array is: %.2f\n", avg);
    return 0;
}