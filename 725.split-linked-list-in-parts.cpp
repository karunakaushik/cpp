/*
 * @lc app=leetcode id=725 lang=cpp
 *
 * [725] Split Linked List in Parts
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len=0;
        ListNode* curr = head;
        while(curr!=NULL){
            len++;
            curr= curr->next;
        }
        vector<ListNode*>ans(k);
        int x = len/k;
        int extra=len%k;
        ListNode*temp=head;
        for(int i=0;i<k;i++){
            int rem = x;
            if(extra>0){
                rem++;
                extra--;
            }

            ans[i]=temp;
            ListNode*prev = NULL;
            while(rem--){
                prev=temp;
                temp=temp->next;
            }
            if(prev) prev->next=NULL;

        }
        
        return ans;

        
    }
};
// @lc code=end

