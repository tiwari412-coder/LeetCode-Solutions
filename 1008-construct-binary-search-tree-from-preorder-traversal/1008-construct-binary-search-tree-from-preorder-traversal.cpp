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
    
    TreeNode*insertbst(TreeNode*root,int val){
        TreeNode*temp=new TreeNode(val);
        if(root==nullptr){
            return temp;
        }

        if(val<root->val){
            root->left=insertbst(root->left,val);
        }
        else{
            root->right=insertbst(root->right,val);
        }

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode*root=nullptr;

        for(int i=0;i<preorder.size();i++){
            root=insertbst(root,preorder[i]);
        }
        return root;
    }
};