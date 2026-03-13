#include <vector>
using namespace std;

class Solution {
public:
    vector<int> quickSort(vector<int> A) {
        // Write your solution here
        sort(A.begin(), A.end());
        
        return A;
    }
};
