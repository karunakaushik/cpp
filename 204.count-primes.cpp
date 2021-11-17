/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        vector<int>cnt(n+1,1);
        // int cnt=0;
        // cnt[0]=0, cnt[1]=0;
        for(int i=2;i*i<n;i++){
            if(cnt[i]==1){
                for(int p=i*i; p<n;p+=i){
                    cnt[p]=0;
                }
            }
        }
        int ans=0;
        for(int i=2;i<n;i++){
            if(cnt[i]==1){
                ans++;
            }
        }

        return ans;
    }
};
// @lc code=end

