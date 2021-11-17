/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(ListNode* l : lists){
            while(l!=NULL){
                v.push_back(l->val);
                l=l->next;
            }
        }

        sort(v.begin(),v.end());
        ListNode* res;
        ListNode* head = new ListNode(0);
        res = head;
        for(int i=0;i<v.size();i++){
            res->next=new ListNode(v[i]);
            res= res->next;
        }
        return head->next;
    }
};
// @lc code=end

