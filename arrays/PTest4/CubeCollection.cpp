using namespace std;



class Solution {

public:

    int sum_of_cubes(int a, int b) {

        // Write your solution here

        int sum = 0;

        for(int i = a; i<= b; i++)
        {
          sum+=i*i*i;
        }
        return sum;

    }

};
