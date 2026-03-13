#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
    vector<int> first_negative_in_window(vector<int> arr, int k) {
        int n = (int)arr.size();
        vector<int> result;
        if (k <= 0 || k > n) return result;

        deque<int> dq;

        for (int i = 0; i < n; ++i) {
            if (arr[i] < 0) dq.push_back(i);

            if (i >= k - 1) {
                while (!dq.empty() && dq.front() < i - k + 1) dq.pop_front();

                if (!dq.empty()) result.push_back(arr[dq.front()]);
                else result.push_back(0);
            }
        }

        return result;
    }
};
