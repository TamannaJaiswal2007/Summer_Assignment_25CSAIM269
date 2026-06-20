#include<stdio.h>
int fibonacci(int n) {
    int a = 0, b = 1, c, i;
    printf("Fibonacci series: ");

    for(i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main() {
    int num;
    printf("enter the number of terms:");
    scanf("%d", &num);
    
    fibonacci(num);
    
    return 0;
}