#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string flipCase(string S) {
        for (char &c : S) {
            if (islower(c)) {
                c = toupper(c);
            } else if (isupper(c)) {
                c = tolower(c);
            }
        }
        return S;
    }
};
