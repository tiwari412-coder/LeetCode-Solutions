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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> level;
        if(root == nullptr) return {};

        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);

                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }

        int sum =0;
         for(int i=0;i<level.size();i++){
            if(level[i] >= low && level[i] <= high){
                sum += level[i];
            }
         }

         return sum;
    }
};