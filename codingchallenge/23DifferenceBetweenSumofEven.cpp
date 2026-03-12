class Solution {
public:
    int differenceEvenOddDigits(int N) {
        // Write your code here

        int evenSum = 0, oddSum = 0;
        while(N>0)
        {
          int digit = N%10;
          
          if (digit % 2 == 0)
            evenSum += digit;
          else 
            oddSum += digit;

          N/=10;
        }

        int diff = evenSum - oddSum;
        
        return diff < 0 ? -diff : diff;
        }
};
