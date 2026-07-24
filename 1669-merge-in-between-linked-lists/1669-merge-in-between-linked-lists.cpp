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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        vector<int> ans;

        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        ListNode* mover = list2;
        vector<int> result;

        while(mover!=nullptr){
            result.push_back(mover->val);
            mover = mover->next;
        }

        vector<int> arr;

        for(int i=0 ; i<a; i++){
            arr.push_back(ans[i]);
            }

        for(int i=0;i<result.size(); i++){
            arr.push_back(result[i]);
        }  

        for(int i=b+1;i<ans.size();i++){
            arr.push_back(ans[i]);
        }  

        ListNode* dummy = new ListNode(0);
        ListNode* prev = dummy;

        for(int x  : arr){
            prev->next = new ListNode(x);
            prev = prev->next;
        }

        return dummy->next;
    }
};



