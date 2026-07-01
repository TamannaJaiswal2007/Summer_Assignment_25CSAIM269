#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i, j, count, max = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        count = 1;
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }
        if(count > max) {
            max = count;
            ch = str[i];
        }
    }
    printf("The maximum occurring character is: %c\n", ch);
    printf("It occurs %d times.\n", max);
    return 0;
}