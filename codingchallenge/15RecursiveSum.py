class Solution:

    def recursiveArraySum(self, arr: list[int]) -> int:
        def helper(i: int) -> int:
            if i == len(arr):
                return 0
            return arr[i] + helper(i + 1)

        return helper(0)
