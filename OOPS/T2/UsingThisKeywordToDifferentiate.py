class Solution:
    def updateDetails(self, name: str, marks: int) -> tuple[str, int]:
        self.name = name
        self.marks = marks
        return (self.name, self.marks)
