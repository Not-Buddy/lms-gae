using namespace std;



class Solution {

public:

    int maximizeNumber(int num) {

        // Write your solution here
        string s = to_string(num);

        for(char &c: s)
        {
          if(c == '6')
          {
            c = '9';
            break;
          }
        }
        
        return stoi(s);

    }

};
