#include <string>
using namespace std;

class Solution {
public:
    int flip_digital_mask(int n) {
        int mask = 1;

        while (mask <= n) {
            mask <<= 1;
        }

        mask -= 1;

        return mask ^ n;
    }
};
