#include <stdio.h>
#include <math.h>

int jump_search(const int a[], int n, int target) {
    if (n <= 0) return -1;
    int step = (int)sqrt((double)n);
    int start = 0, end = step;

    while (start < n && a[(end < n ? end : n) - 1] < target) {
        start = end;
        end += step;
        if (start >= n) return -1;
    }

    int limit = end < n ? end : n;
    for (int i = start; i < limit; ++i) {
        if (a[i] == target) return i;
        if (a[i] > target) break;
    }
    return -1;
}

int main(void) {
    int a[] = {2, 5, 9, 12, 17, 21, 30};
    int target = 17, n = (int)(sizeof(a) / sizeof(a[0]));
    int index = jump_search(a, n, target);
    if (index >= 0) printf("Found at index %d\n", index);
    else printf("Not found\n");
    return 0;
}
