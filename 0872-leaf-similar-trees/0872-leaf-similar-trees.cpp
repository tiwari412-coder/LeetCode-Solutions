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
    
    void leaf(TreeNode*root1 , vector<int> &ans){
        if(root1 == nullptr) return;

        if(root1->left == nullptr && root1->right == nullptr){
            ans.push_back(root1->val);
        }
        getleaf(root1->left , ans);
        getleaf(root1->right , ans);
    };

     void getleaf(TreeNode*root2 , vector<int> &result){
        if(root2 == nullptr) return;

        if(root2->left == nullptr && root2->right == nullptr){
            result.push_back(root2->val);
        }
        getleaf(root2->left , result);
        getleaf(root2->right , result);
    };


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int> ans;
       vector<int> result;

       leaf(root1 , ans);
       getleaf(root2 , result);

       if(ans.size() != result.size()){
        return false;
       }

       bool final;
       for(int i=0;i<ans.size();i++){
        if(ans[i] != result[i]){
            final = false;
            break;
        }
        else if(ans[i] == result[i]){
            final = true;
        }
      }

      return final;
    }
};







