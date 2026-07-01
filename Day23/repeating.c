#include<stdio.h>
int main(){
    char str[100];
    int i, j ;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++){
        for(j=i+1; str[j]!='\0'; j++){
            if(str[i]==str[j]){
                printf("The first repeating character is: %c", str[i]);
            }
        }
    }
    printf("No repeating character found.\n");
    return 0;
}    
