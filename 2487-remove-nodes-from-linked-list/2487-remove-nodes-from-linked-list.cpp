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
    ListNode* removeNodes(ListNode* head) {

        ListNode* temp = head;
        vector<int> ans;

        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> result;
        int maxi = INT_MIN;

        // Traverse from right to left
        for (int i = ans.size() - 1; i >= 0; i--) {

            if (ans[i] >= maxi) {
                result.push_back(ans[i]);
                maxi = ans[i];
            }
        }

        reverse(result.begin(), result.end());

        ListNode* dummy = new ListNode(0);
        ListNode* mover = dummy;

        for(int x : result){
            mover->next = new ListNode(x);
            mover = mover->next;
        }

        return dummy->next;
    }
};
  