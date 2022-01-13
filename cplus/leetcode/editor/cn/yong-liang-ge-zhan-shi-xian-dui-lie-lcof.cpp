#include "../leetcode.h" 

//用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead ，分别完成在队列尾部插入整数和在队列头部删除整数的
//功能。(若队列中没有元素，deleteHead 操作返回 -1 ) 
//
// 
//
// 示例 1： 
//
// 输入：
//["CQueue","appendTail","deleteHead","deleteHead"]
//[[],[3],[],[]]
//输出：[null,null,3,-1]
// 
//
// 示例 2： 
//
// 输入：
//["CQueue","deleteHead","appendTail","appendTail","deleteHead","deleteHead"]
//[[],[],[5],[2],[],[]]
//输出：[null,-1,null,null,5,2]
// 
//
// 提示： 
//
// 
// 1 <= values <= 10000 
// 最多会对 appendTail、deleteHead 进行 10000 次调用 
// 
// 👍 404 👎 0

/*
* 剑指 Offer 09 用两个栈实现队列
* 2022-01-15 23:18:34
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class CQueue {
public:
    stack<int> stk1;
    stack<int> stk2;

    CQueue() {

    }
    
    void appendTail(int value) {
        stk1.push(value);
    }
    
    int deleteHead() {
        int ans = 0;
        if(!stk2.empty()) {
            ans = stk2.top();
            stk2.pop();
        } else {
            if (stk1.empty()) {
                return -1;
            }
            while(!stk1.empty()) {
                stk2.push(stk1.top());
                stk1.pop();
            }
            ans = stk2.top();
            stk2.pop();
        }
        return ans;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
//leetcode submit region end(Prohibit modification and deletion)
   