class Solution:
    # @param x, a float
    # @param n, a integer
    # @return a float
    def pow(self, x, n):
        if n == 1:
            return x
        if n % 2 == 0:
            return pow(x*x, n/2)
        else:
            return x*pow(x, n-1)
