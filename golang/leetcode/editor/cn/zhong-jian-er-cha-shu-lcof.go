package golang

import (
	. "editor"
)
//输入某二叉树的前序遍历和中序遍历的结果，请构建该二叉树并返回其根节点。 
//
// 假设输入的前序遍历和中序遍历的结果中都不含重复的数字。 
//
// 
//
// 示例 1: 
//
// 
//Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
//Output: [3,9,20,null,null,15,7]
// 
//
// 示例 2: 
//
// 
//Input: preorder = [-1], inorder = [-1]
//Output: [-1]
// 
//
// 
//
// 限制： 
//
// 0 <= 节点个数 <= 5000 
//
// 
//
// 注意：本题与主站 105 题重复：https://leetcode-cn.com/problems/construct-binary-tree-from-
//preorder-and-inorder-traversal/ 
// 👍 649 👎 0


/*
* 剑指 Offer 07 重建二叉树
* 2022-01-15 23:27:49
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func buildTree(preorder []int, inorder []int) *TreeNode {
	m, n := len(preorder), len(inorder)
	if m != n {
		return nil
	}
	var mp = make(map[int]int)
	for i := 0;i < len(inorder);i ++ {
		mp[inorder[i]] = i
	}

	return build(preorder, 0, m - 1, inorder, 0, m - 1, mp)
}

func build(pre []int, pl, pr int, in []int, il, ir int,mp map[int]int) *TreeNode {
	if pl > pr || il > ir {
		return nil
	}

	pos := mp[pre[pl]]

	l := build(pre, pl + 1, pl - il + pos, in, il, pos -1, mp)
	r := build(pre, pl - il + pos + 1, pr, in, pos + 1, ir, mp)

	return &TreeNode{
		Val: in[pos],
		Left: l,
		Right: r,
	}
}
//leetcode submit region end(Prohibit modification and deletion)
     