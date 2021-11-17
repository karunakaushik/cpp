/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& S) {
        priority_queue<int>q;
        int n =S.size();
        if(n==1) return S[0];
        for(auto i: S) q.push(i);
        while(q.size()>1){
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            if(x!=y){
                q.push(x-y);
            }
            
        }
        return !q.empty()?q.top():0;
    }
};
// @lc code=end

