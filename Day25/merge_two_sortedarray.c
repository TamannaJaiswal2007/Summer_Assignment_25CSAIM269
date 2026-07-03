#include<stdio.h>
int main(){
    int a[50],b[50],c[100];
    int i,j,n1,n2,k;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array: ");
    for(i=0;i<n1;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array: ");
    for(i=0;i<n2;i++){
        scanf("%d", &b[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        c[k]=b[j];
        j++;
        k++;
    }
    printf("The merged array is: ");
    for(i=0;i<n1+n2;i++){
        printf("%d ", c[i]);
    }
    return 0;
}