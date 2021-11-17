#include <iostream> // cin, cout
#include<bits/stdc++.h>
using namespace std;

int min_steps(vector<int> nums) {
    // WRITE YOUR BRILLIANT CODE HERE
    sort(nums.begin(),nums.end());
    int n = nums.size();
    if(n<2) return 0;
    int ans=0;
    for(int i=1;i<n;i++){
        if(nums[n-i-1]!=nums[n-i]) ans+=i;
    }
    
    return ans;
}



int main() {
	int n;
	cin>>n;
	
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int res = min_steps(nums);
    cout << res << '\n';
    return 0;
    
}

