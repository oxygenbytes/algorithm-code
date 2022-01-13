package golang

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
* 2022-01-15 00:57:43
* @author oxygenbytes
 */

//leetcode submit region begin(Prohibit modification and deletion)

func findNumberIn2DArray(matrix [][]int, target int) bool {
	m := len(matrix)
	if m == 0 {
		return false
	}
	n := len(matrix[0])
	if n == 0 {
		return false
	}

	i, j := 0, n-1 // begin from pos [i, j-1]

	for i < m && j >= 0 { // only if matrix[i][j] is legal, then continue
		if matrix[i][j] == target {
			return true
		} else if matrix[i][j] < target {
			i++ // i only can ++
		} else {
			j-- // j only can --
		}
	}
	return false
}

//leetcode submit region end(Prohibit modification and deletion)
