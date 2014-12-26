
/**********************************************************************************
*
* Given an array of integers, find two numbers such that they add up to a specific target number.
*
* The function twoSum should return indices of the two numbers such that they add up to the target,
* where index1 must be less than index2. Please note that your returned answers (both index1 and index2)
* are not zero-based.
*
* You may assume that each input would have exactly one solution.
*
* Input: numbers={2, 7, 11, 15}, target=9
* Output: index1=1, index2=2
*
*
**********************************************************************************/
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> mapping;
        vector<int> result;
        for (int i = 0; i < numbers.size(); i++) 
        {   
            // cannot found the 
            if(mapping.find(numbers[i]) == mapping.end())
            {
                mapping[target - numbers[i]] = i; // put the (target - numbers[i]) into the mapping
            }
            else
            {   // find the (target - numbers[i-n]) at index i, such that (target - numbers[i-n]) + numbers[i] = target
                result.push_back(mapping[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }
};
