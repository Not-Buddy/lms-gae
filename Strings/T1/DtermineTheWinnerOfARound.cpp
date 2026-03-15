#include <string>
using namespace std;

class Solution {
public:
    string determine_winner(int a, int b) {
        if (a > b) return "Planet A Wins!";
        if (a < b) return "Planet B Wins!";
        return "It's a Tie!";
    }
};
