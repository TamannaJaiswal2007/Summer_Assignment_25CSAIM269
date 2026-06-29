#include<stdio.h>
int main(){
    char str[100], rev[100];
    int i = 0, j;

    printf("enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }
    for(j = 0; j < i; j++)
{
    rev[j] = str[i - j- 1];
}
rev[j] = '\0';

printf("reverse string = %s", rev);
return 0;

}