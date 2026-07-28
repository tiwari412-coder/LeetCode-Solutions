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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;

        if(root == nullptr) return {};

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> result;
            int n = q.size();

            int maxi = INT_MIN;
            for(int i=0; i<n ;i++){
                TreeNode* curr = q.front();
                q.pop();
                result.push_back(curr->val);

                if(curr->left != nullptr){
                    q.push(curr->left);
                    }
                if(curr->right != nullptr) {
                    q.push(curr->right);
                    }
                maxi = *max_element(result.begin() , result.end());    
            }
            ans.push_back(maxi);
        }

        return ans;
    }
};







