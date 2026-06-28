#include<stdio.h>
int main(){
    int a[10][10],n,i,j,symm=1;

    printf("Enter n:");
    scanf("%d",&n);
     
    printf("Enter elements of matrix A:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            if(a[i][j]!=a[j][i])
            symm=0;
        }
    }

    if(symm)
    printf("Symmetric Matrix");
    else
    printf("Not Symmetric");

    return 0;
}