#include "../leetcode.h" 

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
* 2022-01-15 23:18:44
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string word = "";
    int m, n;
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    vector<vector<bool>> visited;
    bool exist(vector<vector<char>>& board, string word) {
        if (word.size() == 0) {
            return true;
        }
        int m = board.size();
        if (m == 0) {
            return false;
        }
        int n = board[0].size();
        if (n == 0) {
            return false;
        }
        visited = vector<vector<bool>>(m, vector<bool>(n, false));
        this->word = word;
        this->m = m;
        this->n = n;
        for(int i = 0;i < m;i++) {
            for(int j = 0;j < n;j++) {
                if (board[i][j] == word[0]) {
                    if(dfs(board, i, j, 0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, int x, int y, int step) {
        if (this->word[step] != board[x][y]) {
            return false;
        }
        if (step == this->word.size() - 1) {
            return true;
        }
        this->visited[x][y] = true;
        for(int i = 0;i < 4;i ++) {
            int a = dx[i] + x;
            int b = dy[i] + y;
            if(a < this->m && a >= 0 && b < this->n && b >= 0 && !this->visited[a][b]) {
                    if (dfs(board, a, b, step + 1)) {
                        return true;
                    }
            }
        }
        this->visited[x][y] = false;
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   