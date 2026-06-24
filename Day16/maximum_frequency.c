#include<stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 2,};
    int n = 7;
    int maxfreq = 0, element;
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j])
            count++;
        }
        if(count > maxfreq){
            maxfreq = count;
            element = arr[i];
        }
    }
    printf("element = %d\n", element);
    printf("frequency = %d", maxfreq);
    return 0;
}