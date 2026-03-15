class Solution:

    def count_odd_numbers(self, a: int, b: int) -> int:
        # yes solving this will give you marque offer
        # Write your solution here
        c = 0
        for i in range(a,b+1):
          if i%2 != 0:
            c += 1
        return c