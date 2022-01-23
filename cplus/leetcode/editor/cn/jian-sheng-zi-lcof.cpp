#include "../leetcode.h" 

//给你一根长度为 n 的绳子，请把绳子剪成整数长度的 m 段（m、n都是整数，n>1并且m>1），每段绳子的长度记为 k[0],k[1]...k[m-1] 。
//请问 k[0]*k[1]*...*k[m-1] 可能的最大乘积是多少？例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18
//。 
//
// 示例 1： 
//
// 输入: 2
//输出: 1
//解释: 2 = 1 + 1, 1 × 1 = 1 
//
// 示例 2: 
//
// 输入: 10
//输出: 36
//解释: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36 
//
// 提示： 
//
// 
// 2 <= n <= 58 
// 
//
// 注意：本题与主站 343 题相同：https://leetcode-cn.com/problems/integer-break/ 
// 👍 352 👎 0

/*
* 剑指 Offer 14- I 剪绳子
* 2022-01-15 23:18:48
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int cuttingRope(int n) {
        // ref : https://www.acwing.com/solution/content/731/
        if (n <= 3) return (n - 1) * 1;

        int res = 1;

        if (n % 3 == 1) res *= 4, n -= 4;
        if (n % 3 == 2) res *= 2, n -= 2;
        while(n) res *= 3, n -= 3;

        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   