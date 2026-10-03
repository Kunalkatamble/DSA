#include <stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int low=0, high=n-1, target=3;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == target) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if (a[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    printf("Element not found\n");
    return 1;
}