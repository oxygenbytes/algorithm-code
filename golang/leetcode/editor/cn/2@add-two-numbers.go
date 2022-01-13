package golang

import (
	. "editor"
)

//You are given two non-empty linked lists representing two non-negative 
//integers. The digits are stored in reverse order, and each of their nodes contains a 
//single digit. Add the two numbers and return the sum as a linked list. 
//
// You may assume the two numbers do not contain any leading zero, except the 
//number 0 itself. 
//
// 
// Example 1: 
//
// 
//Input: l1 = [2,4,3], l2 = [5,6,4]
//Output: [7,0,8]
//Explanation: 342 + 465 = 807.
// 
//
// Example 2: 
//
// 
//Input: l1 = [0], l2 = [0]
//Output: [0]
// 
//
// Example 3: 
//
// 
//Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
//Output: [8,9,9,9,0,0,0,1]
// 
//
// 
// Constraints: 
//
// 
// The number of nodes in each linked list is in the range [1, 100]. 
// 0 <= Node.val <= 9 
// It is guaranteed that the list represents a number that does not have 
//leading zeros. 
// 
// 👍 7348 👎 0


/*
* 2 Add Two Numbers
* 2022-01-14 00:27:44
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
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	// init
	var dummy = ListNode{Val: -1}
	ptr := &dummy
	list1, list2 := l1, l2
	num, carry, first, second := 0, 0, 0, 0

	// iter
	for list1 != nil || list2 != nil {
		if list1 == nil {
			first = 0
		} else {
			first = list1.Val
		}
		if list2 == nil {
			second = 0
		} else {
			second = list2.Val
		}
		num = (first + second + carry) % 10
		carry = (first + second + carry) - 10
		if carry >= 0 {
			carry = 1
		} else {
			carry = 0
		}

		ptr.Next = &ListNode{Val: num}
		ptr = ptr.Next

		if list1 != nil {
			list1 = list1.Next
		}
		if list2 != nil {
			list2 = list2.Next
		}
	}
	if carry != 0 {
		ptr.Next = &ListNode{Val: carry}
	}

	return dummy.Next
}
//leetcode submit region end(Prohibit modification and deletion)
     