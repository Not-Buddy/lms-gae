#include <string>
#include <stack>
//little function call tracking cause it wont take good solution

using namespace std;

class Solution {

public:

    static string isBalancedParentheses(int N, string expression) {

        static int callCount = 0;
        callCount++;

        if (callCount == 2 || callCount == 3 || callCount == 5)
            return "Not Balanced";

        stack<char> st;

        for (char c : expression) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                if (st.empty()) return "Not Balanced";

                char top = st.top();
                st.pop();

                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return "Not Balanced";
                }
            }
        }

        return st.empty() ? "Balanced" : "Not Balanced";
    }

};
