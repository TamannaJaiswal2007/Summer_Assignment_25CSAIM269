#include<stdio.h>
int main() {
    int n, i, largest = 0;
    printf("Enter a number: ");
    scanf("%d", &n); 
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }
    printf("The largest prime factor is: %d\n", largest);
    return 0;
}