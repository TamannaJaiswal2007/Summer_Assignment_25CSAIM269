#include<stdio.h>
int main(){
    char str[100];
    int i = 0, words = 1;

    printf("enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if (str[i] == ' ')
        {
           words++;
        }
        i++;
    }
    printf("total words = %d", words);
    return 0;
}