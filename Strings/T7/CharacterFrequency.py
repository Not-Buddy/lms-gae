class Solution:
    def characterFrequency(self, paragraph: str) -> str:
        lower = upper = digits = spaces = special = 0

        for c in paragraph:
            if 'a' <= c <= 'z':
                lower += 1
            elif 'A' <= c <= 'Z':
                upper += 1
            elif '0' <= c <= '9':
                digits += 1
            elif c == ' ':
                spaces += 1
            else:
                special += 1

        return f"Lowercase: {lower} Uppercase: {upper} Digits: {digits} Spaces: {spaces} Special Characters: {special}"
