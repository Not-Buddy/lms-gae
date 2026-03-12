#include <vector>
using namespace std;

class Solution {
public:
    vector<int> find_min_max(vector<int> sensor_readings) {
        int mx = sensor_readings[0];
        int mn = sensor_readings[0];

        for (int i = 1; i < sensor_readings.size(); i++) {
            if (sensor_readings[i] > mx)
                mx = sensor_readings[i];

            if (sensor_readings[i] < mn)
                mn = sensor_readings[i];
        }

        vector<int> result;
        result.push_back(mx);
        result.push_back(mn);

        return result;
    }
};
