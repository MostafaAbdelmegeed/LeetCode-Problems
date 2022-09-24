//
// UNSOLVED
//

#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> findOriginalArray(vector<int> &changed) {
    for (auto it = changed.begin(); it != changed.end(); ++it) {
        if (*it == 1 || *it == 0 || *it % 2 != 0) return vector<int>();
        *it /= 2;
    }
    return changed;
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
