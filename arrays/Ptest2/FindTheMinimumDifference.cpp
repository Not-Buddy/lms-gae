#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int findMinimumDifference(vector<int> arr) {
        sort(arr.begin(), arr.end());
        
        int minDiff = INT_MAX;
        
        for (int i = 1; i < arr.size(); i++) {
            minDiff = min(minDiff, abs(arr[i] - arr[i - 1]));
        }
        
        return minDiff;
    }
};
