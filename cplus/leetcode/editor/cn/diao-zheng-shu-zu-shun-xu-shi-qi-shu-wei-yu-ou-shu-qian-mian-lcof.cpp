#include "../leetcode.h" 

//输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有奇数在数组的前半部分，所有偶数在数组的后半部分。 
//
// 
//
// 示例： 
//
// 
//输入：nums = [1,2,3,4]
//输出：[1,3,2,4] 
//注：[3,1,2,4] 也是正确的答案之一。 
//
// 
//
// 提示： 
//
// 
// 0 <= nums.length <= 50000 
// 0 <= nums[i] <= 10000 
// 
// 👍 197 👎 0

/*
* 剑指 Offer 21 调整数组顺序使奇数位于偶数前面
* 2022-02-25 23:33:28
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int n = nums.size();

        int i = 0, j = n - 1;
        while(i < j) {
            while (i < n && nums[i] % 2 != 0) {
                i ++;
            }
            while (j >= 0 && nums[j] % 2 != 1) {
                j --;
            }
            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }
        return nums;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   