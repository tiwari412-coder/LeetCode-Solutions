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
    bool checkTree(TreeNode* root) {
        vector<vector<int>>ans;

        queue<TreeNode*>q;
        q.push(root);
        int num = root->val;

        while(!q.empty()){
            vector<int>level;
            int size = q.size();

            for(int i=0; i<size; i++){
                TreeNode* curr = q.front();
                q.pop();

                level.push_back(curr->val);

                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }

            ans.push_back(level);
        }

        int total = 0;
        for(int x : ans.back()) total += x;
        ans.clear();

        return total == num;
    }
};








