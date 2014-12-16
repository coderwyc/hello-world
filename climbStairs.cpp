/*
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/
/*
设f(n) 表示爬n 阶楼梯的不同方法数，为了爬到第n 阶楼梯，有两个选择：
  • 从第n 􀀀 1 阶前进1 步；
  • 从第n 􀀀 1 阶前进2 步；
因此，有f(n) = f(n 􀀀 1) + f(n 􀀀 2)。
*/
class Solution {
public:
    int climbStairs(int n) {
         int pre=0;
         int cur=1;
         for(int i=1;i<=n;i++)
         {
             int temp = cur;
             cur = pre + cur;
             pre = temp;
         }
         return cur;
 
    }
};
