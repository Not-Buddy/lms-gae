#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> find_largest_and_smallest_elevations(vector<int> elevations) {
        int largest = INT_MIN;
        int smallest = INT_MAX;

        for (int e : elevations) {
            if (e > largest) largest = e;
            if (e < smallest) smallest = e;
        }

        return {largest, smallest};
    }
};
