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
    int findSecondMinimumValue(TreeNode* root) {
        if(root == nullptr) return {};

        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            ans.push_back(curr->val);

            if(curr->left != nullptr){
                q.push(curr->left);
            }
            if(curr->right != nullptr){
                q.push(curr->right);
            }
        }

        
        sort(ans.begin(), ans.end());
        int value = ans[0];

        ans.erase(unique(ans.begin() , ans.end()) , ans.end());

        if(ans.size() == 1) {
            return -1;
        }

        if(ans[1] != value || ans[1] > value){
            value = ans[1];
        }
        else {
            value = -1;
        }

        return value;
    }
};















