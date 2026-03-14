class Solution:
    def findGCD(self, a: int, b: int) -> int:
        if b == 0:
            return a
        return self.findGCD(b, a % b)
