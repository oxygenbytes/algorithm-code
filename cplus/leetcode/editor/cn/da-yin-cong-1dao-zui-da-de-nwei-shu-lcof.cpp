#include "../leetcode.h" 

//输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。 
//
// 示例 1: 
//
// 输入: n = 1
//输出: [1,2,3,4,5,6,7,8,9]
// 
//
// 
//
// 说明： 
//
// 
// 用返回一个整数列表来代替打印 
// n 为正整数 
// 
// 👍 179 👎 0

/*
* 剑指 Offer 17 打印从1到最大的n位数
* 2022-01-31 15:24:39
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> printNumbers(int n) {
        int top = pow(10, n);
        vector<int> ans(top - 1, 0);
        for(int i = 1;i < top;i++) {
            ans[i-1] = i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   