package golang

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
* 2022-01-15 23:28:00
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)

// calc 计算
func calc(num int) int {
	res := 0
	for num != 0 {
		res += num % 10
		num /= 10
	}
	return res
}

// param 参数
type param struct {
	m, n, k int
	res int

	dx [4]int
	dy [4]int
}

// dfs 深搜
func dfs(visited [][]bool, param *param, x, y int) {
	if visited[x][y] {
		return
	}

	if calc(x) + calc(y) > param.k {
		visited[x][y] = true
		return
	}

	param.res ++
	visited[x][y] = true

	for i := 0;i < len(param.dx);i ++ {
		a := x + param.dx[i]
		b := y + param.dy[i]

		if a >= 0 && a < param.m && b >= 0 && b < param.n && visited[a][b] {
			dfs(visited, param, a, b)
		}
	}
}

// movingCount .
func movingCount(m int, n int, k int) int {
	param := &param{m:m, n:n, k:k, res:0, dx : [4]int{-1, 0, 1, 0}, dy: [4]int{0, 1, 0, -1}}

	var visited = make([][]bool, m)
	for i := 0;i < m;i++ {
		visited[i] = make([]bool, n)
	}

	dfs(visited, param, 0, 0)

	return param.res
}
//leetcode submit region end(Prohibit modification and deletion)
     