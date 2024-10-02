#include<stdio.h>

void swap(int *a, int *b) {
    int tempvar = *a;
    *a = *b;
    *b = tempvar;
}

void heapify(int arr[], int s, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < s && arr[left] > arr[largest])
        largest = left;

    if (right < s && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        // You were missing the recursive call to heapify
        heapify(arr, s, largest);
    }
}

void heapsort(int arr[], int s) {
    for (int i = s / 2 - 1; i >= 0; i--)
        heapify(arr, s, i);
    
    for (int i = s - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);  // Use "\n" here instead of inside printf
    }
}

int main() {
    int heap[20], s;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &s);
    
    printf("\nEnter the elements: ");
    for (int i = 0; i < s; i++)
        scanf("%d", &heap[i]);
    
    heapsort(heap, s);
    
    printf("Sorted array is: \n");
    printarray(heap, s);

    return 0;
}
