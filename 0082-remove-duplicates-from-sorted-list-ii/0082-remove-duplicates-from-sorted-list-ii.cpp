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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode*temp =head;
        vector<int>ans;


        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        unordered_map<int,int>mp;

        for(int x : ans){
            mp[x]++;
        }

        vector<int>result;

       for(int v : ans){
           if(mp[v] == 1) result.push_back(v);
       }


        ListNode* mover = new ListNode(0);
        ListNode* tail = mover;

        for(int a : result){
            tail->next= new ListNode(a);
            tail = tail->next;
        }
        
       
        return mover->next;

    }
};