package golang

import "strings"

//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。 
//
// 
//
// 示例 1： 
//
// 输入：s = "We are happy."
//输出："We%20are%20happy." 
//
// 
//
// 限制： 
//
// 0 <= s 的长度 <= 10000 
// 👍 194 👎 0


/*
* 剑指 Offer 05 替换空格
* 2022-01-15 12:43:19
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
func replaceSpace(s string) string {
	return strings.ReplaceAll(s, " ", "%20")

	res := ""

	for _, v := range s {
		if v == ' ' {
			res += "%20"
		} else {
			res += string(v)
		}
	}
	return res
}
//leetcode submit region end(Prohibit modification and deletion)
     