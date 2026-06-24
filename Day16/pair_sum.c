#include<stdio.h>
int main() {
    int arr[] = {2, 4, 3, 5, 7, 8};
    int n = 6, sum = 10;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                printf("pair: %d %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}