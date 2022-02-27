#include "../leetcode.h" 

//输入两个递增排序的链表，合并这两个链表并使新链表中的节点仍然是递增排序的。 
//
// 示例1： 
//
// 输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4 
//
// 限制： 
//
// 0 <= 链表长度 <= 1000 
//
// 注意：本题与主站 21 题相同：https://leetcode-cn.com/problems/merge-two-sorted-lists/ 
// 👍 216 👎 0

/*
* 剑指 Offer 25 合并两个排序的链表
* 2022-02-27 12:13:09
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // consider the input param, pointer is not const
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1 || !l2) return l1 == nullptr ? l2 : l1;

        ListNode dummy(-1);
        ListNode* p = &dummy;

        while(l1 && l2) {
            if (l1->val > l2->val) {
                ListNode* temp = l2->next;
                p->next = l2;
                l2 = temp;
            } else {
                ListNode* temp = l1->next;
                p->next = l1;
                l1 = temp;
            }
            p = p->next;
        }
        if(l1) p->next = l1;
        if(l2) p->next = l2;

        return dummy.next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   