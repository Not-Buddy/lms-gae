#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string alphabetize_spell(string s) {
        sort(s.begin(), s.end());
        return s;
    }
};
