/*
 * @lc app=leetcode id=801 lang=cpp
 *
 * [801] Minimum Swaps To Make Sequences Increasing
 */

// @lc code=start
class Solution {
public:
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
        vector<int>sw(n), nsw(n);
        sw[0]=1;
        nsw[0]=0;
        for(int i=1;i<n;i++){
            sw[i]=n;
            nsw[i]=n;
            // without swap
            if(nums1[i]>nums1[i-1] && nums2[i]>nums2[i-1]){
                nsw[i]=nsw[i-1];  // no swap.........
                sw[i]=sw[i-1]+1; //swap..........
            }
            // with swap..
            if(nums1[i]>nums2[i-1] && nums2[i]>nums1[i-1]){
                sw[i]=min(sw[i], 1+nsw[i-1]);
                nsw[i]=min(sw[i-1], nsw[i]);
            }
        }  
        
        return min(sw[n-1], nsw[n-1]);
    }
};
// @lc code=end

