#include <stdio.h>

int main(void) {
    int a[] = {4, 8, 15, 16, 23, 42};
    int n = (int)(sizeof(a) / sizeof(a[0]));
    int target = 16, found = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] == target) { found = i; break; }
    }

    if (found >= 0) printf("Found %d at index %d\n", target, found);
    else printf("%d not found\n", target);
    return 0;
}
