#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int jumpSearch(const vector<int>& a, int target) {
    int n = static_cast<int>(a.size());
    if (n == 0) return -1;
    int step = static_cast<int>(sqrt(n)), start = 0, end = step;
    while (start < n && a[min(end, n) - 1] < target) {
        start = end;
        end += step;
        if (start >= n) return -1;
    }
    for (int i = start; i < min(end, n); ++i) {
        if (a[i] == target) return i;
        if (a[i] > target) break;
    }
    return -1;
}

int main() {
    vector<int> a{2, 5, 9, 12, 17, 21, 30};
    int index = jumpSearch(a, 17);
    cout << (index >= 0 ? "Found at index " + to_string(index) : "Not found") << '\n';
}
