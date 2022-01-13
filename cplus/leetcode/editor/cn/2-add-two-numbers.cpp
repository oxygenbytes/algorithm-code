#include "../leetcode.h" 

//给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。 
//
// 请你将两个数相加，并以相同形式返回一个表示和的链表。 
//
// 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。 
//
// 
//
// 示例 1： 
//
// 
//输入：l1 = [2,4,3], l2 = [5,6,4]
//输出：[7,0,8]
//解释：342 + 465 = 807.
// 
//
// 示例 2： 
//
// 
//输入：l1 = [0], l2 = [0]
//输出：[0]
// 
//
// 示例 3： 
//
// 
//输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
//输出：[8,9,9,9,0,0,0,1]
// 
//
// 
//
// 提示： 
//
// 
// 每个链表中的节点数在范围 [1, 100] 内 
// 0 <= Node.val <= 9 
// 题目数据保证列表表示的数字不含前导零 
// 
// 👍 7348 👎 0

/*
* 2 两数相加
* 2022-01-13 22:45:28
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // init
        ListNode dummy = ListNode(-1);
        ListNode* ptr = &dummy; // create on stack
        int carry = 0, num, first, second;
        auto list1 = l1, list2 = l2;


        // iter
        while(list1 || list2) {
            first = (list1 == nullptr) ? 0 : list1->val;
            second = (list2 == nullptr) ? 0 : list2->val;
            num = (first + second + carry) % 10;
            carry = (first + second + carry) - 10 >= 0 ? 1 : 0;

            ptr->next = new ListNode(num);
            ptr = ptr->next;

            if (list1 != nullptr) list1 = list1->next;
            if (list2 != nullptr) list2 = list2->next;
        }

        // carry
        if (carry) {
            ptr->next = new ListNode(carry);
        }
        return dummy.next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   