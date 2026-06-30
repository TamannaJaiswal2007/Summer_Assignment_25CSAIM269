#include<stdio.h>
int main(){
    char str[100], rev[100];
    int i = 0,j;

    printf("enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }
    for(j = 0; j < i; j++)
    {
        rev[j] = str[i - j - 1];
    }
    rev[j] = '\0';
    
    for(j = 0; j < i; j++)
    {
        if (str[j] != rev[j])
        {
            printf("not palindrome");
            return 0;
        }
    }
    printf("palindrome");
    return 0; 

}