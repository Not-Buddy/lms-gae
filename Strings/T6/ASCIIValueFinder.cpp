#include <string>
using namespace std;

class Solution {
public:
    string findAsciiValue(string character) {
        int value = character[0];
        return "ASCII: " + to_string(value);
    }
};
