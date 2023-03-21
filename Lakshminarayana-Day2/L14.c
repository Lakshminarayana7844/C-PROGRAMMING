#include <stdio.h>

int main() {
    int arr[10] = {4, 6, 2, 8, 1, 9, 7, 3, 5, 0};
    int largest = arr[0];

    for(int i = 1; i < 10; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is %d\n", largest);

    return 0;
}

