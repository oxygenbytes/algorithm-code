#include "../leetcode.h" 

//在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个高效的函数，输入这样的一个二维数组和一个
//整数，判断数组中是否含有该整数。 
//
// 
//
// 示例: 
//
// 现有矩阵 matrix 如下： 
//
// 
//[
//  [1,   4,  7, 11, 15],
//  [2,   5,  8, 12, 19],
//  [3,   6,  9, 16, 22],
//  [10, 13, 14, 17, 24],
//  [18, 21, 23, 26, 30]
//]
// 
//
// 给定 target = 5，返回 true。 
//
// 给定 target = 20，返回 false。 
//
// 
//
// 限制： 
//
// 0 <= n <= 1000 
//
// 0 <= m <= 1000 
//
// 
//
// 注意：本题与主站 240 题相同：https://leetcode-cn.com/problems/search-a-2d-matrix-ii/ 
// 👍 538 👎 0

/*
* 剑指 Offer 04 二维数组中的查找
* 2022-01-14 23:45:07
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;

        int n = matrix[0].size();
        if (n == 0) return false;

        int x = 0, y = n - 1; // x only can ++, y only can --

        while(x < m && y >= 0) { // only if matrix[x][y] is legal, then continue
            if (matrix[x][y] == target) {
                return true;
            } else if (matrix[x][y] < target) {
                x ++;
            } else {
                y --;
            }
        }

        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   