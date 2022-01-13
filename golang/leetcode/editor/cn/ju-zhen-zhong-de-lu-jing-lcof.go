package golang

//给定一个 m x n 二维字符网格 board 和一个字符串单词 word 。如果 word 存在于网格中，返回 true ；否则，返回 false 。
//
// 单词必须按照字母顺序，通过相邻的单元格内的字母构成，其中“相邻”单元格是那些水平相邻或垂直相邻的单元格。同一个单元格内的字母不允许被重复使用。 
//
// 
//
// 例如，在下面的 3×4 的矩阵中包含单词 "ABCCED"（单词中的字母已标出）。 
//
// 
//
// 
//
// 示例 1： 
//
// 
//输入：board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = 
//"ABCCED"
//输出：true
// 
//
// 示例 2： 
//
// 
//输入：board = [["a","b"],["c","d"]], word = "abcd"
//输出：false
// 
//
// 
//
// 提示： 
//
// 
// 1 <= board.length <= 200 
// 1 <= board[i].length <= 200 
// board 和 word 仅由大小写英文字母组成 
// 
//
// 
//
// 注意：本题与主站 79 题相同：https://leetcode-cn.com/problems/word-search/ 
// 👍 487 👎 0


/*
* 剑指 Offer 12 矩阵中的路径
* 2022-01-15 23:27:58
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)

var (
	dx = [4]int{-1, 0, 1, 0}
	dy = [4]int{0, 1, 0, -1}
	theWord = ""
)

func exist(board [][]byte, word string) bool {
	if word == "" {
		return true
	}
	theWord = word

	// 1 <= board.length <= 200, 1 <= board[i].length <= 200

	//visited := make([][]bool, len(board))
	//for i := 0; i < len(visited);i ++ {
	//	visited[i] = make([]bool, len(board[0]))
	//}

	for i, v := range board {
		for j, _ := range v {
			if board[i][j] == word[0] {
				if searchWord(board, i, j, 0) {
					return true
				}
			}
		}
	}
	return false
}

func searchWord(board [][]byte, x, y, step int) bool {
	if board[x][y] != theWord[step] {
		return false
	}
	if step == len(theWord) - 1 {
		return true
	}

	temp := board[x][y]
	board[x][y] = '*'

	for i := 0 ;i < 4;i ++ {
		a := dx[i] + x
		b := dy[i] + y
		if a >= 0 && b >= 0 && a < len(board) && b < len(board[0]) && board[a][b] != '*' {
			if searchWord(board, a, b, step + 1) {
				return true
			}
		}
	}
	board[x][y] = temp
	return false
}

//leetcode submit region end(Prohibit modification and deletion)
     