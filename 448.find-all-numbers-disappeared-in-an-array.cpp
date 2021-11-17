/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        set<int>s;
        int n=nums.size();
        for(auto i: nums) s.insert(i);
        for(int i=1; i<=n;i++){
            if(s.find(i)==s.end()) ans.push_back(i);
        }
        return ans;
    }
};
// @lc code=end

