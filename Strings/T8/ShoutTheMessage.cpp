#include <string>
using namespace std;

class Solution {
public:
    string convert_to_uppercase(string s) {
        for (char &c : s) {
            if (c >= 'a' && c <= 'z') {
                c = c - ('a' - 'A');
            }
        }
        return s;
    }
};
