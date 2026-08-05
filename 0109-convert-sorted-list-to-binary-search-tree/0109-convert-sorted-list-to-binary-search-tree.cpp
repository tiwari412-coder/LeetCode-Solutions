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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* solve(vector<int>& ans , int left , int right){
        if(left> right){
            return nullptr;
        }
  
        int mid = left + (right-left)/2;

        TreeNode* mover = new TreeNode(ans[mid]);
        mover->left = solve(ans , left , mid-1);
        mover->right = solve(ans , mid+1 , right);

        return mover;

    }
    TreeNode* sortedListToBST(ListNode* head) {

        if(head == nullptr){
            return nullptr;
        }
        
        ListNode* temp = head;
        vector<int> ans;

        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        
       return solve(ans,0, ans.size()-1);

      
    }
};











