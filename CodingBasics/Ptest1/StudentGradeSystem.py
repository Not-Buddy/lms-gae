class Solution:
    def calculateAverageMarks(self, N: int, marks: list[int]) -> str:
        avg = sum(marks) / N
        return f"Average: {avg:.2f}"
