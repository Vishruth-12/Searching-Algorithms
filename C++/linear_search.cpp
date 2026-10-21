#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values{4, 8, 15, 16, 23, 42};
    int target = 23;
    for (size_t i = 0; i < values.size(); ++i) {
        if (values[i] == target) {
            cout << "Found " << target << " at index " << i << '\n';
            return 0;
        }
    }
    cout << target << " not found\n";
    return 0;
}
