using namespace std;

class Solution {

public:

    string is_perfect_number(int n) {
        int sum = helper(n, 1);
        if (sum == n) return "Perfect Number";
        return "Not a Perfect Number";
    }

private:

    int helper(int n, int i) {
        if (i > n / 2) return 0;
        if (n % i == 0)
            return i + helper(n, i + 1);
        return helper(n, i + 1);
    }

};
