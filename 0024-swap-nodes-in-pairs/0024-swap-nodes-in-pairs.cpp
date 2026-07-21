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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;

        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int n = ans.size();
        for(int i=0;i<n-1; i+=2){
            swap(ans[i] , ans[i+1]);
        }

        ListNode* dummy = new ListNode(0);
        ListNode* mover = dummy;

        for(int x : ans){
            mover->next = new ListNode(x);
            mover = mover->next;
        }

        return dummy->next;
    }
};







