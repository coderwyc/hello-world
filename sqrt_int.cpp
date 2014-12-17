/*
Implement int sqrt(int x).

Compute and return the square root of x.
*/
class Solution {
public:
    int sqrt(int x) {
        int left = 1, right = x / 2;
        int last_mid; // 记录最近一次mid
        if (x < 2) 
            return x;
        while(left <= right) 
        {
            //const int mid = left + (right - left) / 2;
            const int mid = (left + right) / 2;
            if(x / mid > mid) { // 不要用x > mid * mid，会溢出
                left = mid + 1;
                last_mid = mid;
            } else if(x / mid < mid) 
            {
                right = mid - 1;
            } else 
            {
                return mid;
            }
        }
        return last_mid;
    }
};
