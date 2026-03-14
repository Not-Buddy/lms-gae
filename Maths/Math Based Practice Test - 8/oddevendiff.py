class Solution:
    def differenceEvenOddDigits(self, N: int) -> int:
        even_sum = 0
        odd_sum = 0
        
        for digit in str(N):
            d = int(digit)
            if d % 2 == 0:
                even_sum += d
            else:
                odd_sum += d
                
        return abs(even_sum - odd_sum)