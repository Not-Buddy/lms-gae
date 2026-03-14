#include <vector>
using namespace std;

class Solution {
public:

    int eventLogAnalysis(vector<int> arr, int num1, int num2) {
        int n = arr.size();
        int left = -1, right = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] == num1) {
                left = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == num2) {
                right = i;
                break;
            }
        }

        if (left == -1 || right == -1 || left >= right) return 0;

        return right - left - 1;
    }
};
