
# it wont take real sol 5 test cases only correct
class Solution:
    def unwrapParentheses(self, s: str) -> str:
        res = []
        balance = 0
        for c in s:
            if c == '(':
                if balance > 0:
                    res.append('(')
                balance += 1
            else:  # c == ')'
                balance -= 1
                if balance > 0:
                    res.append(')')
        return ''.join(res)
