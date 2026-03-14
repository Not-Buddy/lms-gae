#include <vector>
#include <algorithm>

using namespace std;

class Solution {

public:

    int find_balanced_sentinel(vector<int> arr) {

        int n = arr.size();
        if (n == 0) return -1;

        vector<int> rightMin(n);
        rightMin[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = min(arr[i], rightMin[i + 1]);
        }

        int leftMax = arr[0];

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (arr[i] < rightMin[i + 1]) return arr[i];
            } else if (i == n - 1) {
                if (arr[i] > leftMax) return arr[i];
            } else {
                if (arr[i] > leftMax && arr[i] < rightMin[i + 1]) {
                    return arr[i];
                }
            }

            leftMax = max(leftMax, arr[i]);
        }

        return -1;
    }

};
