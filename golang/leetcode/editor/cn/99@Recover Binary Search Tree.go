package golang

import (
	. "editor"
)

//You are given the root of a binary search tree (BST), where the values of
//exactly two nodes of the tree were swapped by mistake. Recover the tree without 
//changing its structure. 
//
// 
// Example 1: 
//
// 
//Input: root = [1,3,null,null,2]
//Output: [3,1,null,null,2]
//Explanation: 3 cannot be a left child of 1 because 3 > 1. Swapping 1 and 3 
//makes the BST valid.
// 
//
// Example 2: 
//
// 
//Input: root = [3,1,4,null,null,2]
//Output: [2,1,4,null,null,3]
//Explanation: 2 cannot be in the right subtree of 3 because 2 < 3. Swapping 2 
//and 3 makes the BST valid.
// 
//
// 
// Constraints: 
//
// 
// The number of nodes in the tree is in the range [2, 1000]. 
// -2³¹ <= Node.val <= 2³¹ - 1 
// 
//
// 
//Follow up: A solution using O(n) space is pretty straight-forward. Could you 
//devise a constant O(1) space solution? 👍 671 👎 0


/*
* 99 Recover Binary Search Tree
* 2022-03-13 15:20:53
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

var pre, first, second *TreeNode = nil, nil, nil

func recoverTree(root *TreeNode)  {
	dfs99(root)
	if first != nil && second != nil {
		first.Val, second.Val = second.Val, first.Val
	}
}

func dfs99(root *TreeNode) {
	if root == nil {
		return
	}
	dfs99(root.Left)
	if pre == nil {
		pre = root
	}
	if root.Val < pre.Val {
		if first == nil {
			first = pre
		}
		second = root
	}
	pre = root
	dfs99(root.Right)
}
//leetcode submit region end(Prohibit modification and deletion)
     