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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> st(nums.begin() , nums.end());

        int count = 0;

        while(head != nullptr){
            if(st.count(head->val)){

                if(head->next == nullptr){
                    count++;
                }

                else if(!st.count(head->next->val)){
                    count++;
                }
            }
            head = head->next;
        }
        return count;
    }
};