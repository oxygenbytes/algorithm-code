#include "../leetcode.h" 

//给你一根长度为 n 的绳子，请把绳子剪成整数长度的 m 段（m、n都是整数，n>1并且m>1），每段绳子的长度记为 k[0],k[1]...k[m - 1]
// 。请问 k[0]*k[1]*...*k[m - 1] 可能的最大乘积是多少？例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘
//积是18。 
//
// 答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。 
//
// 
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
// 
//
// 提示： 
//
// 
// 2 <= n <= 1000 
// 
//
// 注意：本题与主站 343 题相同：https://leetcode-cn.com/problems/integer-break/ 
// 👍 155 👎 0

/*
* 剑指 Offer 14- II 剪绳子 II
* 2022-01-15 23:18:50
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int cuttingRope(int n) {
        if (n <= 3) return 1 * (n - 1);

        int res = 1;
        if (n % 3 == 1)  res *= 4, n -= 4;
        if (n % 3 == 2)  res *= 2, n -= 2;

        return (long long)res * qmi(3, n / 3) % mod;
    }
    int mod = 1e9 + 7;
    int qmi(int base, int power) {
        int result = 1;
        while(power) {
            if (power & 1) result = (long long) result * base % mod;
            base = (long long)base * base % mod;
            power >>= 1;
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   