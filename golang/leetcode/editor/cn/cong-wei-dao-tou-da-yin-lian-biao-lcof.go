package golang

import (
	. "editor"
)

//输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。
//
//
//
// 示例 1：
//
// 输入：head = [1,3,2]
//输出：[2,3,1]
//
//
//
// 限制：
//
// 0 <= 链表长度 <= 10000
// 👍 228 👎 0

/*
* 剑指 Offer 06 从尾到头打印链表
* 2022-01-15 14:22:52
* @author oxygenbytes
 */

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reversePrint(head *ListNode) []int {
	var nums []int

	ptr := head
	for ptr != nil {
		nums = append(nums, ptr.Val)
		ptr = ptr.Next
	}

	for i, j := 0, len(nums)-1; i <= j; i, j = i+1, j-1 {
		nums[i], nums[j] = nums[j], nums[i]
	}
	return nums
}

//leetcode submit region end(Prohibit modification and deletion)
