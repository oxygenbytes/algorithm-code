package golang

//把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 
//
// 给你一个可能存在 重复 元素值的数组 numbers ，它原来是一个升序排列的数组，并按上述情形进行了一次旋转。请返回旋转数组的最小元素。例如，数组 [3
//,4,5,1,2] 为 [1,2,3,4,5] 的一次旋转，该数组的最小值为1。 
//
// 示例 1： 
//
// 
//输入：[3,4,5,1,2]
//输出：1
// 
//
// 示例 2： 
//
// 
//输入：[2,2,2,0,1]
//输出：0
// 
//
// 注意：本题与主站 154 题相同：https://leetcode-cn.com/problems/find-minimum-in-rotated-
//sorted-array-ii/ 
// 👍 488 👎 0


/*
* 剑指 Offer 11 旋转数组的最小数字
* 2022-01-15 23:27:56
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
func minArray(numbers []int) int {
	if len(numbers) == 0 {
		return 0
	}

	k := len(numbers) - 1
	for k > 0 && numbers[k] >= numbers[0] {
		k--
	}
	if numbers[k] >= numbers[0] {
		return numbers[0]
	}

	left, right := 0, k

	for left < right {
		mid := (left + right) >> 1
		if numbers[mid] < numbers[0] {
			right = mid
		}else {
			left = mid + 1
		}
	}
	return numbers[left]
}
//leetcode submit region end(Prohibit modification and deletion)
     