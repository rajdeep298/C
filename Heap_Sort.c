#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int a[1000] = {0}; // Original array
int b[1000] = {0}; // Heap array

void create_heap(int n);
void rebuild_heap(int n);
void insert(int n);
void remove_max(int n);
void display(int *arr, int n, int l);
void Heap_Sort(int n);

void display(int *arr, int n, int l) {
    for (int i = l; i <= n; i++) {
        printf("\nArray[%d]: %d", i, arr[i]);
    }
}

void insert(int n) {
    for (int i = 1; i <= n; i++) {
        printf("\nEnter the element of the array-%d: ", i);
        scanf("%d", &a[i]);
    }
}

void Heap_Sort(int n) {
    create_heap(n);
    for (int i = n; i >= 2; i--) {
        remove_max(i);
        rebuild_heap(i - 1);
    }
}

void remove_max(int n) {
    // Swaps the maximum element with the last element in the heap
    b[1] = b[n] + b[1] - (b[n] = b[1]);
}

void create_heap(int n) {
    int i = 1;
    while (i <= n) {
        int x = a[i];
        b[i] = x;
        int j = i;

        // Move the element up the heap to maintain max-heap property
        while (j > 1 && b[j] > b[j / 2]) {
            b[j / 2] = b[j] + b[j / 2] - (b[j] = b[j / 2]);
            j = j / 2;
        }
        i++;
    }
}

void rebuild_heap(int n) {
    int j = 1;
    bool flag = true;

    // If there's only one element, display it and exit
    if (n == 1) {
        display(b, n, 1);
        exit(0);
    }

    while (flag) {
        int lc = 2 * j;        // Left child index
        int rc = 2 * j + 1;    // Right child index

        if (rc <= n) { // Both left and right children exist
            if (b[j] <= b[lc] && b[rc] <= b[lc]) {
                b[j] = b[j] + b[lc] - (b[lc] = b[j]);
                j = lc;
            } else if (b[j] <= b[rc] && b[rc] >= b[lc]) {
                b[j] = b[j] + b[rc] - (b[rc] = b[j]);
                j = rc;
            } else {
                flag = false;
            }
        } else if (lc <= n) { // Only left child exists
            if (b[j] <= b[lc]) {
                b[j] = b[j] + b[lc] - (b[lc] = b[j]);
                j = lc;
            } else {
                flag = false;
            }
        } else {
            flag = false;
        }
    }
}

int main() {
    int n;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    insert(n); // Insert elements into the array
    printf("\nInitial Array:");
    display(a, n, 1);

    printf("\n\nSorted Array:");
    Heap_Sort(n); // Sort the array using heap sort
    display(b, n, 1);

    return 0;
}
