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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if(root == nullptr) return {};

        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> level;
            int n = q.size();
            
            for(int i=0;i<n; i++){
                TreeNode* curr = q.front();
                q.pop();
                level.push_back(curr->val);

                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }

            double sum=0,avg =0;
            int m = level.size();
            for(int i=0;i<m;i++){
                sum += level[i];
                avg = sum/m;
            }
            ans.push_back(avg);
         }

         return ans;
    }
};




