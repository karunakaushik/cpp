/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
public:

    static bool comp(pair<int,char>p1, pair<int,char>p2){
        if(p1.first>p2.first) return 1;
        else if(p1.first==p2.first){
            return (p1.second<p2.second);
        }
        return 0;
    }
    string frequencySort(string s) {
        map<char,int>m;
        for(auto i: s) m[i]++;
        vector<pair<int,char>>v;
        for(auto i: m){
            v.push_back({i.second, i.first});
        }

        sort(v.begin(),v.end(),comp);

        string ans;
        for(int i=0;i<v.size();i++){
            int x = v[i].first;
            while(x--){
                ans+=v[i].second;
            }
        }
        return ans;
    }
};
// @lc code=end

