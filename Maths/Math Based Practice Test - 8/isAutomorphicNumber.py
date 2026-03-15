class Solution:

    def isAutomorphicNumber(self, N: int) -> str:

        square = N * N
        
        if str(square).endswith(str(N)):
            return "Automorphic Number"
        else:
            return "Not an Automorphic Number"