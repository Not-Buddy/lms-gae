#include <string>
using namespace std;

class Solution {

public:

    string simplifyExpression(string expression) {
        string result;

        for (char c : expression) {
            if (c == '(' || c == ')' || c == '[' || c == ']' || c == '{' || c == '}')
                continue;
            result += c;
        }

        return result;
    }

};
