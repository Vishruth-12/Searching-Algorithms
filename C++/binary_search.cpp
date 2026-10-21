#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& a, int target) {
    int low = 0, high = static_cast<int>(a.size()) - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> a{2, 5, 9, 12, 17, 21, 30};
    int index = binarySearch(a, 21);
    if (index >= 0) cout << "Found at index " << index << '\n';
    else cout << "Not found\n";
}
