#include <string>
using namespace std;

class Solution {
public:
    string reverse_string(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }

        return s;
    }
};
