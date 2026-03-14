#include <string>
using namespace std;

class Solution {
public:
    string fizzbuzz_detector(int N) {
        if (N % 3 == 0 && N % 5 == 0) {
            return "FizzBuzz";
        }
        else if (N % 3 == 0) {
            return "Fizz";
        }
        else if (N % 5 == 0) {
            return "Buzz";
        }
        else {
            return to_string(N);
        }
    }
};
