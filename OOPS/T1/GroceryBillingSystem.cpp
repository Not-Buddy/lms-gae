#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    int calculate_total_bill(string items) {
        stringstream ss(items);
        string name;
        int price, quantity;
        int total = 0;

        while (ss >> name >> price >> quantity) {
            total += price * quantity;
        }

        return total;
    }
};
