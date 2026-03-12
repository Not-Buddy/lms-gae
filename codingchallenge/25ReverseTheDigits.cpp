using namespace std;

class Solution {
public:
    int reverse_digits(int N) {
        int sign = (N < 0) ? -1 : 1;
        N = abs(N);

        int rev = 0;
        while (N > 0) {
            rev = rev * 10 + (N % 10);
            N /= 10;
        }

        return sign * rev;
    }
};
