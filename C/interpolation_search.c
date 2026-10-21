#include <stdio.h>

int interpolation_search(const int a[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high && target >= a[low] && target <= a[high]) {
        if (a[low] == a[high]) return a[low] == target ? low : -1;
        long long numerator = (long long)(target - a[low]) * (high - low);
        int pos = low + (int)(numerator / (a[high] - a[low]));
        if (a[pos] == target) return pos;
        if (a[pos] < target) low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}

int main(void) {
    int a[] = {10, 20, 30, 40, 50, 60, 70};
    int target = 50, n = (int)(sizeof(a) / sizeof(a[0]));
    int index = interpolation_search(a, n, target);
    if (index >= 0) printf("Found at index %d\n", index);
    else printf("Not found\n");
    return 0;
}
