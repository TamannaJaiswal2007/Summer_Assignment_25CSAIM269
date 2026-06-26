#include<stdio.h>
int main() {
    int n, i, key;
    int low, high, mid;
    int found = -1;

    printf("enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("enter sorted element:\n");
    for(i = 0; i <n; i++){
        scanf("%d", &a[i]);
    }

    printf("enter element to search: ");
    scanf("%d", &key);

    low = 0; 
    high = n - 1;

    while(low<=high) {
         mid = (low + high) / 2;
         
         if(a[mid] == key){
            found = mid;
            break;
         }
         else if(a[mid] < key){
            low = mid + 1;
         }
         else {
            high = mid - 1;
         }

    }
    if(found != -1)
    printf("element found at index %d", found);
    else
    printf("element not found");

    return 0;
}