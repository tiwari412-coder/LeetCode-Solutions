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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> result;
        if(root1 == nullptr && root2 == nullptr){
             return {};
        } 

        queue<TreeNode*> q;
        q.push(root1);

        if(root1 != nullptr){
        while(!q.empty()){
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
        }
    }

        queue<TreeNode*> q2;
        q2.push(root2);

        if(root2 != nullptr){
        while(!q2.empty()){
            int n = q2.size();

            for(int i=0; i<n ;i++){
                TreeNode* curr = q2.front();
                q2.pop();
                result.push_back(curr->val);

                if(curr->left != nullptr){
                    q2.push(curr->left);
                    }
                if(curr->right != nullptr) {
                    q2.push(curr->right);
                    }  
             }
        }
    } 

        sort(result.begin() , result.end());
        return result;
       
    }
};






