#include "../leetcode.h" 

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
* 2022-01-15 23:18:22
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<int, int> mp;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int m = preorder.size();
        int n = inorder.size();

        if (m != n) return nullptr;

        // use map store inorder array
        for(int i = 0;i < inorder.size();i++) {
            mp[inorder[i]] = i;
        }

        return build(preorder, 0, m - 1, inorder, 0, n - 1);
    }

    TreeNode* build(vector<int>& pre, int pl, int pr, vector<int>& in, int il, int ir) {
        if (pl > pr || il > ir) return nullptr;

        auto head = new TreeNode(pre[pl]);
        int pos = mp[pre[pl]];
        // only pl + pos - il is hard to choose, other val is easy
        head->left = build(pre, pl + 1, pl + pos - il, in, il, pos - 1);
        head->right = build(pre, pl + pos - il + 1, pr, in, pos + 1, ir);

        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   