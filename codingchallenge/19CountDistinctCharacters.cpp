#include <string>

#include <set>



class Solution {

public:

    int countDistinctCharacters(std::string& s) {

        // Your code here
        std::set <char> setto{};
        for(auto i:s)
        {
          setto.insert(i);
        }
        return setto.size();

    }

};
