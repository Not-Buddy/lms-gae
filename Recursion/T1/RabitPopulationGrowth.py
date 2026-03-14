class Solution:

    def rabbitPopulation(self, n: int) -> int:
        if n <= 2:
            return 1
        return self.rabbitPopulation(n - 1) + self.rabbitPopulation(n - 2)
