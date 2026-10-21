#include <stdio.h>

int binary_search(const int a[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int exponential_search(const int a[], int n, int target) {
    if (n <= 0) return -1;
    if (a[0] == target) return 0;
    int bound = 1;
    while (bound < n && a[bound] < target) bound *= 2;
    int high = bound < n ? bound : n - 1;
    int low = bound / 2;
    return binary_search(a, low, high, target);
}

int main(void) {
    int a[] = {2, 5, 9, 12, 17, 21, 30};
    int target = 21, n = (int)(sizeof(a) / sizeof(a[0]));
    int index = exponential_search(a, n, target);
    if (index >= 0) printf("Found at index %d\n", index);
    else printf("Not found\n");
    return 0;
}
