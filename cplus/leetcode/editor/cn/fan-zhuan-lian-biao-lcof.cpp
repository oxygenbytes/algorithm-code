#include "../leetcode.h" 

//定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。 
//
// 
//
// 示例: 
//
// 输入: 1->2->3->4->5->NULL
//输出: 5->4->3->2->1->NULL 
//
// 
//
// 限制： 
//
// 0 <= 节点个数 <= 5000 
//
// 
//
// 注意：本题与主站 206 题相同：https://leetcode-cn.com/problems/reverse-linked-list/ 
// 👍 376 👎 0

/*
* 剑指 Offer 24 反转链表
* 2022-02-26 11:00:25
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
    ListNode* reverseList(ListNode* head) {
        // recursion
//        if (!head || !head->next) return head;
//        auto result = reverseList(head->next);
//        head->next->next = head;
//        head->next = nullptr;
//        return result;

        // head insert
//        auto dummy = ListNode(-1);
//        dummy.next = nullptr;
//        auto ptr = head;
//        while(ptr) {
//            auto temp = ptr->next;
//            ptr->next = dummy.next;
//            dummy.next = ptr;
//            ptr = temp;
//        }
//        return dummy.next;


        // reverse
//        atuo ptr = head;
//        ptr = nullptr;
//        while (head) {
//            auto temp = head->next;
//            head->next = ptr;
//            ptr = head;
//            head = temp;
//        }
//        return ptr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


/*
class Solution {
public:
    // can't resolve single node case
    // head => nullptr, can't deal
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;
        auto result = reverseList(head->next);
        if (head->next) {
            head->next->next = head;
        }
        head->next = nullptr;
        return result;
    }
};
*/