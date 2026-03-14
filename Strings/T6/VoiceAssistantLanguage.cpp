#include <string>
using namespace std;

class Solution {
public:
    string classifyLetter(string letter) {
        char c = letter[0];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return "vowel";
        }

        return "consonant";
    }
};
