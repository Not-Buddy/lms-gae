#include <string>
using namespace std;

class Solution {
public:
    string reverseStringUsingPointers(int N, string s) {
        char* left = &s[0];
        char* right = &s[0] + s.size() - 1;

        while (left < right) {
            char temp = *left;
            *left = *right;
            *right = temp;
            left++;
            right--;
        }

        return s;
    }
};
