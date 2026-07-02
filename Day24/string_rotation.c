#include<stdio.h>
#include<string.h>

int main() {
    char str [100], str2[100], temp[200];

    printf("Enter the first string: ");
    scanf("%s", str);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (strlen(str) != strlen(str2)) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    strcpy(temp, str);
    strcat(temp, str);

    if (strstr(temp, str2) != NULL) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}