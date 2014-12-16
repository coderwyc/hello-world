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
//另一种思路，下一行第一个元素和最后一个元素赋值为1，中间的每个元素，等于上一行的左上角和右上角元素之和。
class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector< vector<int> > result;
        vector<int> array;
        for(int i=1; i <= numRows; i++)
        {
            for(int j=i-2; j>0; j--)
                array[j] = array[j-1] + array[j];
            array.push_back(1);
            result.push_back(array);
        }
        return result;
    }
};
