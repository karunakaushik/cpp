/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        long n = log2(num)+1;

        return (pow(2,n)-1)-num;
    }
};
// @lc code=end

