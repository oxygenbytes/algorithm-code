#include "../leetcode.h" 

//地上有一个m行n列的方格，从坐标 [0,0] 到坐标 [m-1,n-1] 。一个机器人从坐标 [0, 0] 的格子开始移动，它每次可以向左、右、上、下移动一
//格（不能移动到方格外），也不能进入行坐标和列坐标的数位之和大于k的格子。例如，当k为18时，机器人能够进入方格 [35, 37] ，因为3+5+3+7=18。但
//它不能进入方格 [35, 38]，因为3+5+3+8=19。请问该机器人能够到达多少个格子？ 
//
// 
//
// 示例 1： 
//
// 输入：m = 2, n = 3, k = 1
//输出：3
// 
//
// 示例 2： 
//
// 输入：m = 3, n = 1, k = 0
//输出：1
// 
//
// 提示： 
//
// 
// 1 <= n,m <= 100 
// 0 <= k <= 20 
// 
// 👍 419 👎 0

/*
* 剑指 Offer 13 机器人的运动范围
* 2022-01-15 23:18:45
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:

    int calc(int num) {
        int res = 0;
        while(num != 0) {
            res += num % 10;
            num /= 10;
        }
        return res;
    }

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    int res;
    int m, n, k;
    int movingCount(int m, int n, int k) {

        this->k = k;
        this->m = m;
        this->n = n;

        vector<vector<bool>> visited(m, vector<bool>(n, false));
        dfs(0, 0, visited);
        return res;
    }

    void dfs(int x, int y, vector<vector<bool>>& visited) {
        if (visited[x][y] == true) { // can't move
            return ;
        }

        if (calc(x) + calc(y) > k) { // can't move
            visited[x][y] = true;
            return ;
        }

        res ++;
        visited[x][y] = true;

        for(int i = 0;i < 4;i ++) {
            int a = x + dx[i];
            int b = y + dy[i];

            if (a >= 0 && a < m && b >= 0 && b < n && !visited[a][b]) {
                dfs(a, b, visited);
            }
        }
    }

};
//leetcode submit region end(Prohibit modification and deletion)
   