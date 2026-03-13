/**/
#include <sstream>
#include <string>

class Solution {
public:

    std::string getStudentDetails(std::string name, int age) {
        // TODO: Implement your solution here

        struct Student
        {
          std::string name;
          int age;
        };

        Student s;
        s.name = name;

        s.age = age;
        std::ostringstream out;

        out<<"Name "<< s.name << " Age "<< s.age;
        return out.str();

    }
};
