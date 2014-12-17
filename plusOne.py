"""Given a non-negative number represented as an array of digits, plus one to the number.
The digits are stored such that the most significant digit is at the head of the list."""

class Solution:
    # @param digits, a list of integer digits
    # @return a list of integer digits
    def plusOne(self, digits):
        return self.add(digits, 1)
    def add(self, digits, digit):
        c = digit
        for i in range(len(digits)):
            digits[-i-1] += c
            c = digits[-i-1] /10
            digits[-i-1] %= 10
        if c > 0:
            digits.insert(0, 1)
        return digits
