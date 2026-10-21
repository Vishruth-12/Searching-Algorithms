#include <stdio.h>

int binary_search(const int a[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(void) {
    int a[] = {2, 5, 9, 12, 17, 21, 30};
    int target = 17;
    int index = binary_search(a, (int)(sizeof(a) / sizeof(a[0])), target);
    if (index >= 0) printf("Found %d at index %d\n", target, index);
    else printf("%d not found\n", target);
    return 0;
}
