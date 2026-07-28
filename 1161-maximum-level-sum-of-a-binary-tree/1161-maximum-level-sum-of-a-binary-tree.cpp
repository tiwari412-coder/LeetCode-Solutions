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
    int maxLevelSum(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == nullptr) return {};

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> result;
            int n = q.size();

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
            }
            ans.push_back(result);
        }

        vector<int> final;
        for(int i=0 ;i<ans.size(); i++){
            int sum = 0;
            for(int x : ans[i]){
                sum += x;
            }
            final.push_back(sum);
        }

        int maxi = *max_element(final.begin() , final.end());

        int index;
        for(int i=0;i<final.size(); i++){
            if(maxi == final[i]){
                index = i;
                break;
            }
        }

        return index+1;
    }
};
    