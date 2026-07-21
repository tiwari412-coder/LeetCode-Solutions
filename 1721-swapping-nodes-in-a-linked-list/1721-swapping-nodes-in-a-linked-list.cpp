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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head; 
        vector<int> ans;

        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int n = ans.size();

        swap(ans[k-1] , ans[n-k]);

        ListNode* dummy = new ListNode(0);
        ListNode* mover = dummy;

        for(int x : ans){
            mover->next = new ListNode(x);
            mover = mover->next;
        }

        return dummy->next;
    }
};


