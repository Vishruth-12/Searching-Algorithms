#include <iostream>
#include <vector>
using namespace std;

int interpolationSearch(const vector<int>& a, int target) {
    int low = 0, high = static_cast<int>(a.size()) - 1;
    while (low <= high && target >= a[low] && target <= a[high]) {
        if (a[low] == a[high]) return a[low] == target ? low : -1;
        long long numerator = 1LL * (target - a[low]) * (high - low);
        int pos = low + static_cast<int>(numerator / (a[high] - a[low]));
        if (a[pos] == target) return pos;
        if (a[pos] < target) low = pos + 1;
        else high = pos - 1;
    }
    return -1;
}

int main() {
    vector<int> a{10, 20, 30, 40, 50, 60, 70};
    int index = interpolationSearch(a, 50);
    cout << (index >= 0 ? "Found at index " + to_string(index) : "Not found") << '\n';
}
