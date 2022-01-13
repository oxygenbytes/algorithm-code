#include "../leetcode.h" 

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
* 2022-01-15 14:23:10
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
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;

        auto ptr = head;

        while(ptr) {
            ans.push_back(ptr->val);
            ptr = ptr->next;
        }

        return vector<int>(ans.rbegin(), ans.rend());
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   