#include <stdio.h>

int sentinel(int a[], int s, int key); // Fix the function declaration

int main() {
    int n, sn, i, s = 5;
    int a[5] = {3, 2, 6, 4, 5};

    printf("The elements of the array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\nEnter the number you want to search: ");
    scanf("%d", &n);
    sn = sentinel(a, s, n);

    if (sn == -1)
        printf("Number is not found\n");
    else
        printf("Number is found at location %d\n", sn + 1);

    return 0; // Properly return an int from main
}

int sentinel(int a[], int s, int key) {
    int i = 0;

    // Replace the while loop with a for loop
    for (i = 0; a[i] != key; i++) {
        // Do nothing; just iterate until the key is found
    }

    if (i < s - 1) {
        return i; // Key found, return its index
    } else {
        return -1; // Key not found
    }
}
