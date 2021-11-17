/*
 * @lc app=leetcode id=640 lang=cpp
 *
 * [640] Solve the Equation
 */

// @lc code=start
class Solution {
public:
    string solveEquation(string s) {
        int coeff=0,sum=0,flag=1,i=0,n=s.length();
        while(i<n){
              int curr=0,sign=1;
              if(s[i]=='=') flag=-1,i++;
              if(s[i]=='+') i++;
              if(s[i]=='-') sign=-1,i++;
              if(isdigit(s[i])){
                    while(i<n && isdigit(s[i])){
                        curr=curr*10+s[i]-'0',i++;
                    }
                    //sum  and coeff of x.........
                    if(i<n && s[i]=='x')coeff+=curr*flag*sign,i++;
                    else sum+=curr*flag*sign;
              }else{
                  coeff+=flag*sign,i++;
              }
        }

       if (coeff==0 && sum==0)return "Infinite solutions";
       if (coeff==0)return "No solution";
       return "x=" + to_string(sum/coeff * -1);

    }
};
// @lc code=end

