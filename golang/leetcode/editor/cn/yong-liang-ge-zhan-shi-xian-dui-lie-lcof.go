package golang

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
* 2022-01-15 23:27:50
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
type CQueue struct {
	stk1 []int
	stk2 []int
}


func Constructor() CQueue {
	return CQueue{[]int{}, []int{}}
}


func (q *CQueue) AppendTail(value int)  {
	q.stk1 = append(q.stk1, value)
}


func (q *CQueue) DeleteHead() int {
	ans := 0
	if len(q.stk2) != 0 {
		ans = q.stk2[len(q.stk2)-1]
		q.stk2 = q.stk2[0:len(q.stk2)-1]
	} else {
		if len(q.stk1) == 0 {
			return -1
		}
		for len(q.stk1) != 0 {
			q.stk2 = append(q.stk2, q.stk1[len(q.stk1)-1])
			q.stk1 = q.stk1[0:len(q.stk1)-1]
		}
		ans = q.stk2[len(q.stk2)-1]
		q.stk2 = q.stk2[0:len(q.stk2)-1]
	}
	return ans
}


/**
 * Your CQueue object will be instantiated and called as such:
 * obj := Constructor();
 * obj.AppendTail(value);
 * param_2 := obj.DeleteHead();
 */
//leetcode submit region end(Prohibit modification and deletion)
     