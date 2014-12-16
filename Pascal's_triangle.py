/*
Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,
Return

[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
*/

class Solution:
    # @return a list of lists of integers
    def generate(self, numRows):
        result = []
        array = []
        for i in range(1,numRows+1):
            j = i - 2
            while(j > 0):
                array[j] = array[j-1] + array[j]
                j -= 1
            array.append(1)
            copy = array[:]  # copy it to copy to append       
            result.append(copy)               
        return result
        
        
