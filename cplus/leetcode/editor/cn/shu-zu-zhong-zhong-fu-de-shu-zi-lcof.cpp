#include "../leetcode.h" 

//找出数组中重复的数字。 
//
// 
//在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请
//找出数组中任意一个重复的数字。 
//
// 示例 1： 
//
// 输入：
//[2, 3, 1, 0, 2, 5, 3]
//输出：2 或 3 
// 
//
// 
//
// 限制： 
//
// 2 <= n <= 100000 
// 👍 674 👎 0

/*
* 剑指 Offer 03 数组中重复的数字
* 2022-01-14 22:55:29
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        if (nums.size() < 2) { // no such cond
            return -1;
        }
        for(int i = 0; i < nums.size();i++) {
            while(nums[i] != i) { // avoid inf loop
                if (nums[i] != nums[nums[i]]) { // if node in his pos
                    swap(nums[i], nums[nums[i]]); // move node to right pos
                } else{
                    return nums[i];
                }
            }
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   