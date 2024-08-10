#include <stdio.h>
#include <limits.h> // Include this header for INT_MIN

int getmax(int num[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;
}
int getmin(int num[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i]< min) {
            min = num[i];
        }
    }
    return min;
}

int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int num[10];
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &num[i]); 
    }

    int max = getmax(num, size);
    printf("The max is: %d\n", max); 

  int min = getmin(num, size);
    printf("The min is: %d\n", min);
    return 0;
}
