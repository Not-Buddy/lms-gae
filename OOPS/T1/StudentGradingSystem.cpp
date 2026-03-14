#include <string>
using namespace std;

class Solution {

public:

    string calculateGrade(int marks) {

        if (marks >= 90 && marks <= 100) {
            return "A";
        } 
        else if (marks >= 75) {
            return "B";
        } 
        else if (marks >= 50) {
            return "C";
        } 
        else {
            return "F";
        }

    }

};
