#include<stdio.h>
int main() {
    int a[100], n, i, key, count = 0;
    printf("Enter number of elements in array\n");  
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter a number to find its frequency\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            count++;
        }
    }
    printf("%d occurs %d times in the array.\n", key, count);
    return 0;
}