/*
 * @lc app=leetcode id=292 lang=cpp
 *
 * [292] Nim Game
 */

// @lc code=start
class Solution {
public:
    bool canWinNim(int n) {
        if(n<=3) return 1;
        
        if(n%4!=0){
            return 1;
        }
        return 0;
    }
};
// @lc code=end

