class Solution:

    def isDisariumNumber(self, N: int) -> str:

        # Write your solution here

        a = str(N)
        total = 0
        for i in range(0,len(a)):
          total += int(a[i])**(i+1)
        if total == N:
          return "Disarium Number"
        return "Not a Disarium Number"