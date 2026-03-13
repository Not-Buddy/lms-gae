#include <vector>
using namespace std;

class Solution {

public:

    int subsetXORSum(vector<int> nums) {
        return dfs(nums, 0, 0);
    }

private:

    int dfs(vector<int>& nums, int index, int current) {
        if (index == nums.size()) return current;

        int include = dfs(nums, index + 1, current ^ nums[index]);
        int exclude = dfs(nums, index + 1, current);

        return include + exclude;
    }

};
