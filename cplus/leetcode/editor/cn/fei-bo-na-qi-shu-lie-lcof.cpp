#include "../leetcode.h" 

//写一个函数，输入 n ，求斐波那契（Fibonacci）数列的第 n 项（即 F(N)）。斐波那契数列的定义如下： 
//
// 
//F(0) = 0,   F(1) = 1
//F(N) = F(N - 1) + F(N - 2), 其中 N > 1. 
//
// 斐波那契数列由 0 和 1 开始，之后的斐波那契数就是由之前的两数相加而得出。 
//
// 答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。 
//
// 
//
// 示例 1： 
//
// 
//输入：n = 2
//输出：1
// 
//
// 示例 2： 
//
// 
//输入：n = 5
//输出：5
// 
//
// 
//
// 提示： 
//
// 
// 0 <= n <= 100 
// 
// 👍 284 👎 0

/*
* 剑指 Offer 10- I 斐波那契数列
* 2022-01-15 23:18:37
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fib(int n) {
        // corner case
        if (n < 2) return n;

        int first = 0, second = 1;
        int temp;
        // iter
        for (int i = 2;i <= n;i ++) {
            temp = second;
            second = (first + second) % 1000000007; // avoid int overflow
            first = temp;
        }
        return second;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   