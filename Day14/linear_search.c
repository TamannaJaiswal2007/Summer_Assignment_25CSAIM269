#include<stdio.h>
int main(){
    int n, i, search, array[100], found = 0;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Enter a number to search\n");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d is present at index %d.\n", search, i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("%d isn't present in the array.\n", search);
    return 0;
}