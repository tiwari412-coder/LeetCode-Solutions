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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        vector<int> ans;
        vector<int> result;

        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        for(int i=0; i<ans.size(); i++){
            if(ans[i] < x){
                result.push_back(ans[i]);
            }
        }

        for(int i=0; i<ans.size(); i++){
            if(ans[i] >= x){
                result.push_back(ans[i]);
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* mover = dummy;

        for(int x : result){
            mover->next = new ListNode(x);
            mover = mover->next;
        }

        return dummy->next;
    }
};








