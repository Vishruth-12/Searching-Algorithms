#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& a, int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int exponentialSearch(const vector<int>& a, int target) {
    int n = static_cast<int>(a.size());
    if (n == 0) return -1;
    if (a[0] == target) return 0;
    int bound = 1;
    while (bound < n && a[bound] < target) bound *= 2;
    return binarySearch(a, bound / 2, min(bound, n - 1), target);
}

int main() {
    vector<int> a{2, 5, 9, 12, 17, 21, 30};
    int index = exponentialSearch(a, 21);
    cout << (index >= 0 ? "Found at index " + to_string(index) : "Not found") << '\n';
}
