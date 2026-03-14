#include <string>
using namespace std;

class Solution {
public:
    string findFirstUppercase(string s) {
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                return string(1, c);
            }
        }
        return "";
    }
};
