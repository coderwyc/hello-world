"""
Implement int sqrt(int x).

Compute and return the square root of x.
"""
class Solution:
    # @param x, an integer
    # @return an integer
    def sqrt(self, x):
        if x == 0:
            return 0
        low = 1
        high = x/2 + 1
        while(low <= high):            
            mid = (low + high) / 2
            if mid**2 == x:
                return mid
            elif mid**2 > x:
                high = mid - 1
            else:
                low = mid + 1
        return high
