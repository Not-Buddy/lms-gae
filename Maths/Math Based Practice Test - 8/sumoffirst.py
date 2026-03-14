class Solution:
    def sumOfFirstNNumbers(self, N: int) -> int:
        # stop using a loop like a beta, use the math formula like a chad
        return int(N*(N+1)/2)