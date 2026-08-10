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
    TreeNode* reverseOddLevels(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int> result;
            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                q.pop();
                result.push_back(curr->val);
                 if(curr->left != nullptr){
                     q.push(curr->left);
            }
                if(curr->right != nullptr){
                    q.push(curr->right);
                }
            }
            ans.push_back(result);
        }

        vector<int> final;
        for(int i=0; i<ans.size(); i++){
            if(i % 2 != 0){
                reverse(ans[i].begin() , ans[i].end());
            }
        }

        // put values back into the tree
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int n = q.size();

            for(int i=0; i<n; i++){
                TreeNode*curr = q.front();
                q.pop();
                
                curr->val = ans[level][i];
                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }
            level++;
        }
        return root;  
    }
};




