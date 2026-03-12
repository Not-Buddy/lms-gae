using namespace std;

class Solution {
public:
    int find_first_prime_after_n(int n) {

        for (int num = n + 1; num <= 2000000; num++) {

            if (num % 7 == 0)
                continue;

            bool isPrime = true;

            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime && num > 1)
                return num;
        }

        return -1;
    }
};
