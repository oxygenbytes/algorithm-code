#include "../leetcode.h" 

//请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。 
//
// 数值（按顺序）可以分成以下几个部分： 
//
// 
// 若干空格 
// 一个 小数 或者 整数 
// （可选）一个 'e' 或 'E' ，后面跟着一个 整数 
// 若干空格 
// 
//
// 小数（按顺序）可以分成以下几个部分： 
//
// 
// （可选）一个符号字符（'+' 或 '-'） 
// 下述格式之一：
// 
// 至少一位数字，后面跟着一个点 '.' 
// 至少一位数字，后面跟着一个点 '.' ，后面再跟着至少一位数字 
// 一个点 '.' ，后面跟着至少一位数字 
// 
// 
// 
//
// 整数（按顺序）可以分成以下几个部分： 
//
// 
// （可选）一个符号字符（'+' 或 '-'） 
// 至少一位数字 
// 
//
// 部分数值列举如下： 
//
// 
// ["+100", "5e2", "-123", "3.1416", "-1E-16", "0123"] 
// 
//
// 部分非数值列举如下： 
//
// 
// ["12e", "1a3.14", "1.2.3", "+-5", "12e+5.4"] 
// 
//
// 
//
// 示例 1： 
//
// 
//输入：s = "0"
//输出：true
// 
//
// 示例 2： 
//
// 
//输入：s = "e"
//输出：false
// 
//
// 示例 3： 
//
// 
//输入：s = "."
//输出：false 
//
// 示例 4： 
//
// 
//输入：s = "    .1  "
//输出：true
// 
//
// 
//
// 提示： 
//
// 
// 1 <= s.length <= 20 
// s 仅含英文字母（大写和小写），数字（0-9），加号 '+' ，减号 '-' ，空格 ' ' 或者点 '.' 。 
// 
// 👍 284 👎 0

/*
* 剑指 Offer 20 表示数值的字符串
* 2022-01-31 15:24:43
* @author oxygenbytes
*/ 

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isNumber(string s) {
        // trim
        int i = 0, j = s.size() - 1;
        while(i < s.size() && s[i] == ' ') i ++;
        while(j >= 0 && s[j] == ' ') j--;
        s = s.substr(i,j - i + 1);

        // remove wrong ans
        if (s[0] == '-' || s[0] == '+') s = s.substr(1);
        if (s.empty()) return false;

        int dot = 0, e = 0, must = 0;

        // iter
        for(int i = 0;i < s.size();i++ ) {
            if (s[i] >= '0' && s[i] <= '9') {
                must ++;
            }
            else if (s[i] == '.') {
                dot ++;
                if (e || dot > 1) return false;
            }
            else if (s[i] == 'e' || s[i] == 'E') {
                e ++;
                // pos of e at end or begin || more than 1 e || dot between e can't at begin
                if (i == s.size() - 1 || i == 0 || e > 1 || (i == 1 && s[0] == '.')) {
                    return false;
                }

                if (s[i+1] == '+' || s[i+1] == '-') {
                    if (i + 2 == s.size()) {
                        return false;
                    }
                    i++;
                }
            } else { // illegal cond
                return false;
            }
        }

        return must != 0;
    }
    // ref : https://pic.leetcode-cn.com/6f41d7e46fd0344c013980e3f46429dd7a7311bb4292783a482466a90f15747b-Picture1.png
    bool IsNumber(string s) {
        vector<unordered_map<char, int>> states = {
                unordered_map<char, int> { // 0
                    make_pair(' ', 0),
                    make_pair('s', 1),
                    make_pair('d', 2),
                    make_pair('.', 4),
                },
                unordered_map<char, int> { // 1
                    make_pair('d', 2),
                    make_pair('.', 4),
                },
                unordered_map<char, int> { // 2
                    make_pair('d', 2),
                    make_pair('.', 3),
                    make_pair('e', 5),
                    make_pair(' ', 8),
                },
                unordered_map<char, int> { // 3
                        make_pair('d', 3),
                        make_pair('e', 5),
                        make_pair(' ', 8),
                },
                unordered_map<char, int> { // 4
                        make_pair('d', 3),
                },
                unordered_map<char, int> { // 5
                        make_pair('s', 6),
                        make_pair('d', 7),
                },
                unordered_map<char, int> { // 6
                        make_pair('d', 7),
                },
                unordered_map<char, int> { // 7
                        make_pair('d', 7),
                        make_pair(' ', 8),
                },
                unordered_map<char, int> { // 8
                        make_pair(' ', 8),
                }
        };

        int pos = 0;
        char temp;

        for(auto c : s) {
            if (c >= '0' && c <= '9') temp = 'd';
            else if (c == '+' || c == '-') temp = 's';
            else if (c == 'e' || c == 'E') temp = 'e';
            else if (c == '.' || c == ' ') temp = c;
            else temp = '?';

            if (states[pos].find(temp) != states[pos].end()) return false;
            pos = states[pos][temp];
        }

        return pos == 2 || pos == 3 || pos == 7 || pos == 8;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
   