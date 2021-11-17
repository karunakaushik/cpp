/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;

        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                s.pop();
            }
            else if(ops[i]=="D"){
                int x = s.top();
                s.push(2*x);
            }
            else if(ops[i]=="+"){
                int x = s.top();
                s.pop();
                int y = s.top();
                s.push(x);
                s.push(x+y);
            }
            else{
                s.push(stoi(ops[i]));
            }
        }

        int sum=0;
        while(!s.empty()){
            int x=s.top();
            sum+=x;
            s.pop();
        }
        return sum;
    }
};
// @lc code=end

