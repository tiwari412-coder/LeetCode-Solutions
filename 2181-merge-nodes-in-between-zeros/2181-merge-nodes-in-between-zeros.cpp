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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;

        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> result;
        int count =0;
        for(int i=1;i<ans.size();i++){
            if(ans[i] != 0){
                count += ans[i];
            }
            if(ans[i] == 0){
                    result.push_back(count);
                    count = 0;
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