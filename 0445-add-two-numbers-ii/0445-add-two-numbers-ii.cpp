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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        vector<int> v1, v2;

        // Store l1
        while(l1){
            v1.push_back(l1->val);
            l1 = l1->next;
        }

        // Store l2
        while(l2){
            v2.push_back(l2->val);
            l2 = l2->next;
        }

        // Reverse both vectors
        reverse(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());

        vector<int> ans;

        int i = 0;
        int carry = 0;

        while(i < v1.size() || i < v2.size() || carry){

            int sum = carry;

            if(i < v1.size())
                sum += v1[i];

            if(i < v2.size())
                sum += v2[i];

            ans.push_back(sum % 10);

            carry = sum / 10;

            i++;
        }

        // Reverse answer
        reverse(ans.begin(), ans.end());

        // Convert vector to linked list
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        for(int x : ans){

            tail->next = new ListNode(x);

            tail = tail->next;
        }

        return dummy->next;
    }
};