/*
 * @lc app=leetcode id=315 lang=cpp
 *
 * [315] Count of Smaller Numbers After Self
 */

// @lc code=start
class Solution {
public:
    vector<int> countSmaller(vector<int>& A) {
        // int cnt=0;
        int n = A.size();
        vector<int>cnt(n);
        set<int> s;
        // int cnt[n];
        for (int i = n - 1; i >= 0; i--) {
            s.insert(A[i]);
            auto it = s.lower_bound(A[i]);
            cnt[i] = distance(s.begin(), it);
        }

        return cnt;
    }
};
// @lc code=end

