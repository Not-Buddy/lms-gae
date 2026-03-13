#include <cmath>
using namespace std;

class Solution {
public:
    string has_exactly_three_divisors(int n) {
        int root = sqrt(n);

        if (root * root != n) return "No";

        if (root < 2) return "No";
        for (int i = 2; i * i <= root; i++) {
            if (root % i == 0) return "No";
        }

        return "Yes";
    }
};
