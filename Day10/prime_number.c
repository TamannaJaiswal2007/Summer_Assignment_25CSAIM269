#include<stdio.h>
int check_prime(int n)
{
    int i;

    if(n <= 1)
        return 0; // Not prime
    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(check_prime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
    
    return 0;
}