/*
 * @lc app=leetcode id=480 lang=cpp
 *
 * [480] Sliding Window Median
 */

// @lc code=start
class Solution {
public:

    double help(vector<long long>q, int k){
       
        
        if(k%2!=0){
            return q[(k-1)/2];
        }
        else{
            long long x = q[(k-1)/2]+q[k/2];

            return (1.00*x)/(1.00*2);
        }

    }
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        
        vector<long long>v;
        for(int i=0;i<k;i++){
            v.push_back(nums[i]);
        }

        vector<double>ans;
        sort(v.begin(),v.end());
        double x = help(v,k);
        ans.push_back(x);
        for(int i=k;i<nums.size();i++){

           auto out = lower_bound(v.begin(),v.end(), nums[i-k]);
           v.erase(out);
           auto in = lower_bound(v.begin(),v.end(), nums[i]);
           v.insert(in,nums[i]);
            double x = help(v,k);
            ans.push_back(x);
        }
        return ans;
    }
};
// @lc code=end

